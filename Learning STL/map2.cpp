#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

void printmap(map<int,string> &map){
    cout<<"Current map size: "<<map.size()<<endl;
    for(auto &pr : map){
        cout<<pr.first<< " "<<pr.second<<endl;
    }
}

void printmap(map<string,string> &map){
    cout<<"Current map size: "<<map.size()<<endl;
    for(auto &pr : map){
        cout<<pr.first<< " "<<pr.second<<endl;
    }
}

int main(){
    map<int,string> m;
    m[1] = "Abc";//O(log(n))
    m[3] = "Fja";
    m[0] = "Jako";
    m[-23] = "Jofo";
    m.insert({2,"Jojo"});
    m[8];//stores /n string, if was int would store 0
    //All values of map are unique, storing 2 again will result in replacing prev
    m[2] = "Hoho";
    m[13] = "Fja";// string isnt unique
    //map.erase() erases
    m.erase(2);
    m.erase(-1);
    //erasing with iterator:
    auto it2= m.find(0);
    m.erase(it2);
    printmap(m);
    //using map.find()
    //returns iterator
    auto it = m.find(3);
    if(it == m.end()){
        cout<<"No value"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    map<string,string> s;
    s["Ami"]="Kon?";
    s["_ami"] = "Kon";// O(log(n))+s.size()
    s["1"] = "mana";
    auto sit = s.find("Ami");
    if(sit == s.end()){
        cout<<"No value"<<endl;
    }
    else{
        cout<<(*sit).first<<" "<<(*sit).second<<endl;
    }
    printmap(s);
    //m.clear() clears the map and the size becomes 0 

}
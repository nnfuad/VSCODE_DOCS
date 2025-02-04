#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;
//map has two parts, basically a pair, having a key and value
//automatically sorts the key, no matter in what order the definition was given
//implements red black trees algorithm
int main(){
    map<int, string> m;// declaration
    //defiition
    m[1] = "abc";
    m[4] = "132";
    m.insert({2,"Hi"});//insert takes two parameters same as -> m[4]="Hi"
    map<int,string> :: iterator it;
    for(it = m.begin() ; it!= m.end() ; it++){
        cout<<(it->first)<<", "<<(it->second)<<endl;
        //or do the pointer one:
        //cout<<((*it).first)<<", "<<(*it).second<<endl;
    }
}
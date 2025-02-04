//Given N strings print unique strings in lexicographical order with their frequency
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string , int> m;
    int n;
    cin>>n;
    for(int i =0 ; i<n ; i++){
        string s ;
        cin>>s;
        m[s]++;//
    }
    for(auto &map : m){
        cout<<map.first<<" "<<map.second<<endl;
    }
}

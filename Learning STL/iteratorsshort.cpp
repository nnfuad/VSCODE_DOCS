#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,3,10,4};

    //long way
    for(int i = 0 ; i<v.size() ; i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it;
    for(it = v.begin() ; it!= v.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //after the c++11 compiler version it can dynamically detect any datatype such as for ints and also iterators
    auto a=1;
    cout<<a<<endl;

    //short way

    
    for(auto value: v){
        cout<<value<<" ";
    }
    cout<<endl;
    


}
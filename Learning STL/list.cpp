#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> mylist;
    mylist.push_back(10);

    for(list<int>:: iterator i = mylist.begin() ; i != mylist.end() ;i++){
        cout<< (*i);
    }

}
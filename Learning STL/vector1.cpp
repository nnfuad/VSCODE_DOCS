#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void display(vector<int> &vector) // vectors are passed by reference as vectors can be large and itll be insufficient
{ 
    for(int i = 0 ; i<vector.size() ; i++ ){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> a,b;
    a.push_back(13);
    cout<<a[0]<<endl;
    cout<<"Enter the size of your vector: ";
    int n,n1;
    cin>>n;
    for(int i = 0 ; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>n1;
        b.push_back(n1);
    }
    // for(int i = 0 ; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    display(b);
}
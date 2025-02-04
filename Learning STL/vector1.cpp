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
    int n,n1=1;
    cin>>n;
    for(int i = 0 ; i<n; i++){
        //cout<<"Enter element "<<i+1<<": ";
        //cin>>n1; 
        b.push_back(n1);
        n1+=3;
    }
    // for(int i = 0 ; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    b.pop_back();
    vector<int> :: iterator it = b.begin();
    cout<<*(it+1)<<endl; // *it+1 means *it=1 +1 = 2
    display(b);
    
    //display through iterator:
    for(it = b.begin() ; it!= b.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

}
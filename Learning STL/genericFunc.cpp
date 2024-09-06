#include <iostream>
using namespace std;

// int addInt(int a , int b){
//     return a+b;
// }

// float addFloat(float a , float b){
//     return a+b;
// }
/*  Important NOTE:

user:
    #include <iostream>
using namespace std;

int addInt(int a , int b){
    return a+b;
}

float addFloat(float a , float b){
    return a+b;
}
template <typename T>

T add(T a , T b){
    return a+b;
}
int main(){
    cout<<addFloat(5.3 , .7);
    cout<<add(2,3)<<endl;
}
whats wrong in those code?


ChatGPT:
The code you provided is mostly correct, but there are a few points to address for better clarity and functionality:

Function Overloading and Template Function Conflict:

The addInt and addFloat functions are not used in the code. The template function add can handle both integer and float types, making these specific functions redundant.
Namespace Issue:

When using add(2,3) in the presence of a template function, the compiler might get confused if the explicit function addInt exists. However, since addInt and addFloat are not needed, you can remove them.
Output Formatting:

The output is missing a space or newline between the results of addFloat and add. This can be easily fixed by adding a space or a newline character in the cout statement.
Including Return Type in Template Function:

The template function is correctly defined, so no changes are needed there.

*/

template <typename T>

T add(T a , T b){
    return a+b;
}
int main(){
    // cout<<addFloat(5.3 , .7);
    //wrong: cout<<add(2,3.5)<<endl;
    cout<<add(34.2, 45.23)<<endl;
}
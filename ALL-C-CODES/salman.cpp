#include <iostream>

int main()
{
    int a;
    std::cin>>a;
    while(a--)
    {
        int x;
        std::cin>>x;
        if(x>=30){
            std::cout<<"YES"<<std::endl;
        }
        else std::cout<<"NO"<<std::endl;
    }
}
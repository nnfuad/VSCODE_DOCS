#include <stdio.h>
void isprime(int a ){
    int flag=0;
    for(int i=2; i<a; i++){
        if(a%i==0){
            flag=1;
        }
    }

    if(flag==1) printf("The number %d is not a prime number.",a);
    else printf("The number %d is a prime number.",a);
}
int main(){
    int n1;
    printf("Input a positive number : ");
    scanf("%d",&n1);
    printf("\n");
    isprime(n1);
}
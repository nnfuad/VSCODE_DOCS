#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a<0){
        printf("The entered number is negative\n");
    }
    else if(a>0){
        printf("The entered number is positive\n");
    }
    else if (a==0){
        printf("The entered number is 0\n");
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}
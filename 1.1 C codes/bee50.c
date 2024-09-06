#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = 1 ; i<=a ; i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,(int)pow(i,2));
        }
    }
}
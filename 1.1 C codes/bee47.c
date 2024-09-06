#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a ; i<=(a+11) ; i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}
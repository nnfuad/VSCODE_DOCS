#include <stdio.h>
int main(){
    int a,b,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
    for(int i =a-1 ; i>b ; i-- ){
        if(i%2!=0){
            count = count+i;
        }
    }
    }
    if(a<b){
    for(int i =a+1 ; i<b ; i++ ){
        if(i%2!=0){
            count = count+i;
        }
    }
    }

    printf("%d\n",count);
}
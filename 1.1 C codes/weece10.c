#include <stdio.h>
int main(){
    int a ,count;
    scanf("%d",&a);
    if(a==0){
        printf("%d\n",0);
    }
    else if((a/5)>=1 && (a%5)!=0){
        count=(a/5)+1;
        printf("%d\n",count);
    }
    else if((a/5)>=1 && (a%5)==0){
        count = (a/5);
        printf("%d\n",count);
    }
    else if((a/5)<1){
        count=1;
        printf("%d\n",count);
    }
    return 0;
}
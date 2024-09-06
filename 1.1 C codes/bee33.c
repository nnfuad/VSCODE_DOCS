#include <stdio.h>
int main(){
    int a,b,dif;
    scanf("%d %d",&a,&b);
    if(a == b){
        printf("O JOGO DUROU %d HORA(S)\n",24);
    }
    if((a > 0 && (b > 0 && b <24)) && b>a){
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    if((a > 12 && a<24 ) && b<12){
        printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
    }
    if((a>12 && a<24) && (b<24 && b>12) && a>b){
        printf("O JOGO DUROU %d HORA(S)\n",a-b);
    }
    return 0;
}
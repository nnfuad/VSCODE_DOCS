#include <stdio.h>
int main(){
    int h1,m1,h2,m2;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if( h1 == h2 == m1 == m2){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
    }
    if((h1==0 && h2==0 && m1>m2)){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23,60-m2-m1);
    }
    if((h1==0 && h2==0 && m1<m2)){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",23,m2-m1);
    }
    if((h1==h2 && h1!=0 && m1<m2)){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",0,m2-m1);
    }
    if((h2>h1) && h2<24   && m2>m1){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,m2-m1);
    } 
    if((h2>h1) && h2<24  && m2<m1){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1-1,(60-m1)+m2);
    }
    if(h1 > h2 && h1< 24 && m2>m1){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-h1)+h2,m2-m1);
    }
    if(h1 > h2 && h1< 24 && m1>m2){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-h1)+h2-1,(60-m1)+m2);
    }
}
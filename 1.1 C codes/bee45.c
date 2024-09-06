#include <stdio.h>
int main(){

    int a[5];
    int evpar=0,oddimpar=0,pos=0,neg=0;
    for(int i = 0 ; i < 5 ; i++){
        scanf("%d",&a[i]);
    }
     for(int j = 0 ; j<5; j++){
        if(a[j]%2==0){
            evpar++;
        }
        if(a[j]%2!=0){
            oddimpar++;
        }
        if(a[j]>0){
            pos++;
        }
        if(a[j]<0){
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",evpar,oddimpar,pos,neg);
            return 0;
}
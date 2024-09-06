#include <stdio.h>
int main(){
    double a,b,c,d,e,newsum;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double media = (a*2+b*3+c*4+d)/(2+3+4+1);
    printf("Media: %.1lf\n",media);
    if(media >=7.0){
        printf("Aluno aprovado.\n");
    }    
    if(media <5.0){
        printf("Aluno reprovado.\n");
    }
    if(media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        newsum = (e+media)/2;
        if(newsum>=5.0){
        printf("Aluno aprovado.\n");
        }
        if(newsum<=4.9){
            printf("Aluno reprovado\n");
        }
        printf("Media final: %.1lf\n",newsum);
    }
    return 0;
}
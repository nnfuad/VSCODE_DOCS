#include <stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    if(a>0.00 && a<=2000.00){
        printf("Isento\n");
    }
    if(a>=2000.01 && a <=3000.00){
        printf("R$ %.2lf\n",((a-2000)*.08));
    }
    if(a>= 3000.01 && a<=4500.00){
        printf("R$ %.2lf\n",(1000*.08)+(a-3000)*.18);
    }
    if(a>4500.00){
        printf("R$ %.2lf\n",(1000*.08)+(1500*.18)+(a-4500)*.28);
    }
    return 0;
}
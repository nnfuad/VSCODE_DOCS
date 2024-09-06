#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,D;
    scanf("%lf %lf %lf",&a,&b,&c);
    D =(pow(b,2))-4*a*c;
    if(D>=0 && a>0){
        printf("R1 = %.5lf\n",(-b+sqrt(D))/(2*a));
        printf("R2 = %.5lf\n",(-b-sqrt(D))/(2*a));
    }
    else printf("Impossivel calcular\n");
    return 0;
}
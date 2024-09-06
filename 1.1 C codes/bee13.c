#include <stdio.h>
#include <math.h>
int main(){
    double const pi=3.14159;
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf %lf %lf",&A,&B,&C);
    TRIANGULO = .5*A*C;
    CIRCULO = pi*C*C;
    TRAPEZIO = .5*((A+B)*C);
    QUADRADO = B*B;
    RETANGULO = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n"
            ,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;

}
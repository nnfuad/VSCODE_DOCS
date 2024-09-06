#include <stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        double peri = a +b +c;
        printf("Perimetro = %.1lf\n",peri);
    }
    else {
        double area = ((a+b)/2)*c;
        printf("Area = %.1lf\n",area);
    }
    return 0;
}
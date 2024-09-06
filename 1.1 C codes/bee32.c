#include <stdio.h>
#include <math.h>
void sort(double *n1, double *n2, double *n3){
    if (*n1 < *n2) {
        double temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    if (n1 < n3) {
        double temp = *n1;
        *n1 = *n3;
        *n3 = temp;
    }
    if (*n2 < *n3) {
        double temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
}
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    sort(&a,&b,&c);
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if((pow(a,2)==pow(b,2)+pow(c,2))){
        printf("TRIANGULO RETANGULO\n");
        }
        else if((pow(a,2)>pow(b,2)+pow(c,2))){
        printf("TRIANGULO OBTUSANGULO\n");
        }
        else if((pow(a,2)<pow(b,2)+pow(c,2))){
        printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
       }
        else if(a==b ||  b==c || c==a){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
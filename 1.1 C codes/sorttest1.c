#include <stdio.h>
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
    double a=2,b=4,c=1;
    sort(&a,&b,&c);
    printf("%lf %lf %lf",a,b,c);
    return 0;
}
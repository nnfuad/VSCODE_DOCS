#include <stdio.h>
#include <math.h>
int main(){
    double const n = 3.14159;
    double R,A;
    scanf("%lf",&R);
    A=n*pow(R,2);
    printf("A=%.4lf\n",A);
    return 0;
}
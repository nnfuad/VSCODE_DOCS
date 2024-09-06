#include <stdio.h>
#include <math.h>
int main(){
    double r;
    scanf("%lf",&r);
    double s = (4/3.0)*3.14159*(pow(r,3));
    printf("VOLUME = %.3lf\n",s);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    double r ;
    scanf("%lf\n",&r);
    double area = M_PI*r*r;
    double cir = 2 * M_PI *r;
    printf("%.6lf %.6lf\n",area, cir);
    return 0;
}


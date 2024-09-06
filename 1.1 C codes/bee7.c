#include <stdio.h>
int main(){
    double a,b,c,avg;
    do {
        scanf("%lf",&a);
    }while (a<0 && a>10);

    do {
        scanf("%lf",&b);
    }while (b<0 && b>10);
    
    do {
        scanf("%lf",&c);
    }while (c<0 && c>10);

    avg=((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}
#include <stdio.h>
int main(){
    int a;
    double b;
    scanf("%d",&a);
    scanf("%lf",&b);
    double avgcons = a/b;
    printf("%.3lf km/l\n",avgcons);
    return 0;
}
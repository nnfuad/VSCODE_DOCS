#include <stdio.h>
int main(){
    int lkm = 12;
    int time,speed;
    scanf("%d",&time);
    scanf("%d",&speed);
    double litre = (double)(time*speed)/lkm;
    printf("%.3lf\n",litre);
    return 0;
}
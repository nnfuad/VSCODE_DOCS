#include <stdio.h>
int main(){
    int c1,p1,c2,p2;
    double t1,t2,t;
    scanf("%d %d %lf",&c1,&p1,&t1);
    scanf("%d %d %lf",&c2,&p2,&t2);
    t = (t1*p1)+(t2*p2);
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1 ; i<=n ; i++){
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        double avg = (a*2 + b*3 + c*5)/10;
        printf("%.1lf\n",avg);
    }
}
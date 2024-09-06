#include <stdio.h>
int main(){
    double a[6],b[6],c=0.00;
    int count=0;
    for(int i = 0; i<=5 ; i++ ){
    scanf("%lf",&a[i]);
    }
    for( int i =0,j=0; i<=5,j<=5;i++,j++){
        if(a[j]>0){
            count++;
            b[i]=a[j];
        }
    }
    for(int i = 0; i<=5 ; i++){
        c = c+b[i];
    }
    double avg = (c/(double)count);
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);
}
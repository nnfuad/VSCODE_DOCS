#include <stdio.h>
int main(){
    double a[6];
    int count=0;
    for(int i= 0;i<6;i++){
        scanf("%lf",&a[i]);
    }
    for(int j =0; j<6 ;j++){
        if(a[j]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);
}
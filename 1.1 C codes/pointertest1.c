#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;
    int max=a[0];
    for(int i = 1 ; i<(sizeof(a)/sizeof(a[0])) ; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("%d\n",max);
}
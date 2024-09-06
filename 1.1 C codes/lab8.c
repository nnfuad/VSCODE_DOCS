#include <stdio.h>
#include<math.h>
void checkarm(int a){
        int arr1[1000],i = 0, sum1=0,sum2=a;
        while(a != 0) {
            arr1[i] = a%10;
            i++;

            a /= 10;
        }
        for(int j = 0; j < i; j++) {
            sum1 += pow(arr1[j], i);
        }
        if(sum1 == sum2) {
            printf("Armstrong");
        }
        else {
            printf("Not");
        }
}
int main(){
    int n;

    scanf("%d", &n);

    checkarm(n);

}
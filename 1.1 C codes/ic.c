#include <stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    if(k>=1 && k<=100){
        if (k%2 == 0 && k!=2){
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else{
        printf("NO");
    }
}
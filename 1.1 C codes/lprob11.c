#include <stdio.h>

int main() {
    int i,j,k,l;
    printf("Multiplication table of : ");
    scanf("%d",&k);
    printf("\n");
    for(i=1,j=1,l=1;i<=10,j<=10,l<=10;i++,j++,l++){
        printf("%d    *    ",k);
        printf("%d    =    ",j);
        printf("%d\n",(k*l));
    }
    return 0;
}

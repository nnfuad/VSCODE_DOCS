#include <stdio.h>
int main(){
    int a, row, col;printf("Enter the row num: ");scanf("%d",&a);
    for(row=1;row<=a;row++){
        for(col=1;col<=row;col++){
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
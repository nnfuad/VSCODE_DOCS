#include <stdio.h>
int main(){
    int a, row, col;printf("Enter the row num: ");scanf("%d",&a);
    for(row=a;row>=1;row--){
        for(col=1;col<=row;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
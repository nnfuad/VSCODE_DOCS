#include <stdio.h>
int main(){
    int a, row, col,str;printf("Enter the row num: ");scanf("%d",&a);
    for(row=1;row<=a;row++){
        for(col=1;col<=row;col++){
            printf(" ");
        }
        for(str=1;str<=row;str++){
                printf("* ");
            }
        printf("\n");
    }
    return 0;
}
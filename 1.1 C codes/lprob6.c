#include <stdio.h>
#include <math.h>

int main() {
    int y;
    printf("Enter the year \n");
    scanf("%d",&y);
    if(y%4 && y%100!=0 || y%400==0){
        printf("%d is a leap year\n",y);
    }
    return 0;
}

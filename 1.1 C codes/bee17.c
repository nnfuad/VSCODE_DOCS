#include <stdio.h>
int main(){
    int speedX = 60;
    int speedY = 90;
    int distance,minute;
    scanf("%d",&distance);
    minute = (distance*60)/(speedY-speedX);
    printf("%d minutos\n",minute);
    return 0;

}
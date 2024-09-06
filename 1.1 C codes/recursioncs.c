#include <stdio.h>
void draw(int a)
{
    if(a<=0){
        return;
    }
    draw(a-1);
    for(int i =0 ;i < a ;i++){
        printf("#");
    }
    printf("\n");
}
int main()
{
    int x;
    scanf("%d",&x);
    draw(x);
}
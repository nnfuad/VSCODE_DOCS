#include <stdio.h>
int main(){
    int num,hour;
    float arph,salary;
    scanf("%d",&num);
    scanf("%d",&hour);
    scanf("%f",&arph);
    salary = hour*arph;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
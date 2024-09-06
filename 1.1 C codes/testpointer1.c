#include <stdio.h>
int main(){
    int a = 10, b = 12;
    int *p;
    p = &a;
    printf("%p\n",p);
    printf("%d\n",a);
    printf("%p\n",&a);
    *p=12;
    printf("value of a is %d",a);
    b=a;
    return 0;
}
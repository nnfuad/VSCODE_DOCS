#include <stdio.h>
int main(){
    int a[]= {11,22,36,5};
    int sum = 0;
    //int *p= &a[0];
    int *p = a; 
    printf("value is %d\n",*p);
    *p++;
    printf("value is %d\n",*p);
    *p++;
    printf("value is %d\n",*p);
    *p++;
    return 0;
}
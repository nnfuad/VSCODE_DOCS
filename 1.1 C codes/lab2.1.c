//call by reference
#include <stdio.h>
void swap();
int main(){
    int n1=2,n2=3,res1,res2;
    printf("First Num? ");
    scanf("%d",&n1);
    printf("\n");
    printf("Second Num? ");
    scanf("%d",&n2);
    printf("\n");
    printf("Before swapping: n1 = %d, n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping n1 = %d, n2 = %d\n",n1,n2);
}
 void swap(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
 }
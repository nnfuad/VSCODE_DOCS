#include <stdio.h>
int add(int a,int b){
    return a+b ;
}
int minus(int a, int b){
    return a-b;
}
int main(){
    
    int n1,n2; char ch;
    printf("Enter two numbers and an arithmetical sign(+,-,*,/)\neach followed by a space to operate(add,substract,multiple,divide) them : ") ;
    
    scanf("%d %d %c",&n1,&n2,&ch);
    
    if (ch == '+'){
    int add(int n1, int n2);
    printf("\nThe result of addition is %d\n",add(n1,n2));
    return 0;
    }
    
    if (ch == '-'){
    int add(int n1, int n2);
    printf("\nThe result of substraction is %d\n",minus(n1,n2));
    return 0;
    }

}
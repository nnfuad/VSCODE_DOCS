#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == 1){
        double Total = 4.00*b;
        printf("Total: R$ %.2lf\n",Total); 
    }
        if(a == 2){
        double Total = 4.50*b;
        printf("Total: R$ %.2lf\n",Total); 
    }
        if(a == 3){
        double Total = 5.00*b;
        printf("Total: R$ %.2lf\n",Total); 
    }
        if(a == 4){
        double Total = 2.00*b;
        printf("Total: R$ %.2lf\n",Total); 
    }
        if(a == 5){
        double Total = 1.50*b;
        printf("Total: R$ %.2lf\n",Total); 
    }
}
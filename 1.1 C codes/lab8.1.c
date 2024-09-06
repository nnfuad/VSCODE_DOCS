#include <stdio.h>
void find_fact(int a){
        printf("Factorial of %d are ",a);
        for (int i=1; i<=(a); i++){
            if(a%i == 0){
                printf("%d ",i);
                if(i==a){
                    printf("");
                }
            }        
        }
}
int main(){
    int n;
    scanf("%d",&n);
    find_fact(n);
    return 0;
}
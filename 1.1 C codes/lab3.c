#include <stdio.h>
void odevchk(int a ){
    if(a%2==0){
        printf("Not an odd number");
    }
    else printf("%d is an odd number ",a);

}
int main(){
    int a ;
    printf("Input any number : ");
    scanf("%d",&a);
    odevchk(a);
    
}

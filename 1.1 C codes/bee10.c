#include <stdio.h>
int main(){
    char name[100];
    double msal,ttlsal;
    scanf("%s",name);
    scanf("%lf",&msal);
    scanf("%lf",&ttlsal);
    double total = msal + (ttlsal*(.15));
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}
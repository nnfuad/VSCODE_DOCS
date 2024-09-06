#include <stdio.h>
int main(){
    double a,novosal;
    scanf("%lf",&a);
    if(a>0.0 && a<=400.00){
        novosal = a + (a*.15);
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",novosal,a*.15,15);
    }
    if(a>= 400.01 && a<=800.00){
        novosal = a + (a*.12);
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",novosal,a*.12,12);
    }
    if(a>=800.01 && a<=1200.00){
        novosal = a + (a*.10);
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",novosal,a*.10,10);
    }
    if(a>=1200.01 && a<=2000.00){
        novosal = a + (a*.07);
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",novosal,a*.07,7);
    }
    if(a>2000.01){
        novosal = a + (a*.04);
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",novosal,a*.04,4);
    }
    return 0;
}
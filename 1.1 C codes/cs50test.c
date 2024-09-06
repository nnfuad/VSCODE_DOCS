#include <stdio.h>

int count(double price, double value)
{
    int n = (int) (price / value);
    return n;
}

void print_notes(int n, double value)
{
    printf("%d nota(s) de R$ %.2lf\n", n, value);
}

void print_coins(int n, double value)
{
    printf("%d moeda(s) de R$ %.2lf\n", n, value);
}

int main(void)
{

    double price;
    scanf("%lf", &price);
    int n;
    printf("NOTAS:\n");
    double a[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    for (int i = 0; i < 6; i++)
    {
        n = count(price, a[i]);
        print_notes(n, a[i]);
        price -= (double) n * a[i]; 
    }
    printf("MOEDAS:\n");
    double b[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    for (int i = 0; i < 5; i++)
    {
        n = count(price, b[i]);
        print_coins(n, b[i]);
        price -= (double) n * b[i]; 
    }
    n = (int) (price * 100);
    print_coins(n, b[5]);
    return 0;
}
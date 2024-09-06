#include <stdio.h>

int main() {
    double value;
    int notes, coins;
    scanf("%lf", &value);

    int cents = (int)(value * 100);

    notes = cents / 100;
    cents %= 100;

    coins = cents;

    printf("NOTAS:\n");    
    printf("%d nota(s) de R$ 100.00\n", notes / 100);
    notes %= 100;

    printf("%d nota(s) de R$ 50.00\n", notes / 50);
    notes %= 50;

    printf("%d nota(s) de R$ 20.00\n", notes / 20);
    notes %= 20;

    printf("%d nota(s) de R$ 10.00\n", notes / 10);
    notes %= 10;

    printf("%d nota(s) de R$ 5.00\n", notes / 5);
    notes %= 5;

    printf("%d nota(s) de R$ 2.00\n", notes / 2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coins / 100);
    coins %= 100;

    printf("%d moeda(s) de R$ 0.50\n", coins / 50);
    coins %= 50;

    printf("%d moeda(s) de R$ 0.25\n", coins / 25);
    coins %= 25;

    printf("%d moeda(s) de R$ 0.10\n", coins / 10);
    coins %= 10;

    printf("%d moeda(s) de R$ 0.05\n", coins / 5);
    coins %= 5;

    printf("%d moeda(s) de R$ 0.01\n", coins);

    return 0;
}

#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    printf("%d\n", amount);
    for (int i = 0; i < 7; i++) {
        int count = amount / banknotes[i];
        amount %= banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", count, banknotes[i]);
    }
    return 0;
}
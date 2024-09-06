#include <stdio.h>

int main() {
    int num, dig, sum = 0;
    scanf("%d", &num);
    if (num >= 10000 && num <= 99999) {
        while (num > 0) {
            dig = num % 10;
            sum += dig;
            num /= 10;
        }

        printf("%d\n", sum);
    }

    return 0;
}

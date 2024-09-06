#include <stdio.h>

void dtob(int n) {
    if (n == 0) {
        printf("Converted binary Number: 0\n");
        return;
    }

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Converted binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    dtob(decimal);

    return 0;
}

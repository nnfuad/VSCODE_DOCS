#include <stdio.h>
#include <math.h>
int main() {
    int number, originalNumber, remainder, n = 0;
    double result = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;

    if (originalNumber == 0) {
        n = 1;
    } else {
        for (int temp = originalNumber; temp != 0; temp /= 10) {
            n++;
        }
    }

    originalNumber = number;

    for (int i = 1; i <= n; i++) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if ((int)result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}

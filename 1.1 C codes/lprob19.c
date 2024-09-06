#include <stdio.h>

int main() {
    int number, count = 1; 
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        count = 0; 
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                count = 0; 
                break;
            }
        }
    }
    if (count==0) {
        printf("%d is not a prime number.\n", number);
    } else {
        printf("%d is a prime number.\n", number);
    }
    return 0;
}

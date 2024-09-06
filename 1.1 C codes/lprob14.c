#include <stdio.h>
int main() {
    int num1, num2, hcf, lcm;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 < 0 || num2 < 0) {
        printf("LCM is not defined for negative numbers.\n");
    } else {
        // Calculate HCF (GCD)
        int a = num1, b = num2;
        while (a != b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        hcf = a;
        lcm = (num1 * num2) / hcf;
        printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    }
    return 0;
}
#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    if (n1 < 0 || n2 < 0) {
        printf("HCF is not defined for negative numbers.\n");
    } else {
        int hcf;
        int smaller;
        if (n1 < n2) {
            smaller = n1;
        } else {
            smaller = n2;
        }

        for (hcf = smaller; hcf >= 1; hcf--) {
            if (n1 % hcf == 0 && n2 % hcf == 0) {
                break;
            }
        }

        printf("HCF of %d and %d is %d\n", n1, n2, hcf);
    }

    return 0;
}

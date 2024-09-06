#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the Start of the interval: ");
    scanf("%d", &n1);
    printf("Enter the End of the interval: ");
    scanf("%d", &n2);
    if (n1 < 2) {
        n1 = 2;
    }
    printf("Prime numbers between %d and %d are:\n", n1, n2);
    for (int i = n1; i <= n2; i++) {
        int count = 1;
        if (i <= 1) {
            count = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    count = 0;
                    break;
                }
            }
        }
        if (count==1) {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
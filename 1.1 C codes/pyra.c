#include <stdio.h>

int main() {
    int a;
    printf("Row num? ");
    scanf("%d",&a);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <=i - 1; k++) {
            printf("* ");
        }
        printf("*\n");
    }
    return 0;
}

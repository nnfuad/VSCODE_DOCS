#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if(i==n){
                break;
            }
            printf(",");
        }
    }

    printf("\n");

    return 0;
}

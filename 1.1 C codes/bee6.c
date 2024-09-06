#include <stdio.h>

int main() {
    double A, B, MEDIA;
    do {
        scanf("%lf", &A);
    } while (A < 0 || A > 10);

    do {
        scanf("%lf", &B);
    } while (B < 0 || B > 10);
    MEDIA = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}

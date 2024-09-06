#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double D, r1, r2;

    printf("If the equaton format is a(X^2) +bX +c =0\n Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("The equation has two real and distinct roots: r1 = %lf, r2 = %lf\n", r1, r2);
    } else if (D == 0) {
        r1 = -b / (2 * a);
        printf("One real root: r1 = %lf\n", r1);
    } else {
        double realpart = -b / (2 * a);
        double imgpart = sqrt(-D) / (2 * a);
        printf("The equation has two complex roots:\n r1 = %lf + %lfi,\n r2 = %lf - %lfi\n", realpart, imgpart, realpart, imgpart);
    }

    return 0;
}

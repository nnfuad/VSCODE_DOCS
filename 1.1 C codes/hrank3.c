#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, sum1, dif1;
    float c, d, sum2, dif2;

    // First, read input values
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    // Perform calculations
    sum1 = a + b;
    dif1 = (int)(a - b);
    sum2 = (float)(c + d);
    dif2 = c - d;

    // Print the results
    printf("%d %d\n", sum1, dif1);
    printf("%.1f %.1f\n", sum2, dif2);

    return 0;
}

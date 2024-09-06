#include <stdio.h>
#include <math.h>
int main() {
    int start, end,temp;
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    for (int number = start; number <= end; number++) {
        int originalNumber = number;
        int n = 0;
        double result = 0;
        if (originalNumber == 0) {
            n = 1;
        } else {
            int temp = originalNumber;
            for (; temp != 0; temp /= 10) {
                n++;
            }
        }
        temp = originalNumber;
        for (; temp != 0; temp /= 10) {
            int remainder = temp % 10;
            result += pow(remainder, n);
        }
        if ((int)result == number) {
            printf("%d, ", number);
        }
    }
    printf("\n");
    return 0;
}

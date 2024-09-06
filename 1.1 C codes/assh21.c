#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("How many numbers do you want to calculate the sum of?");
    scanf("%d",&n);
    int a[n];
    for (int i= 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int size = n;
    int *ptr = a;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}

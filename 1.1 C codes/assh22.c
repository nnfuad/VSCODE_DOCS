#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("How many numbers do you want to store in the array? ");
    scanf("%d",&n);
    int a[n];
    for (int i= 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int size = n;
    int *ptr = &a[n-1];
    int sum = 0;
    for (int i = size-1; i >=0; i--) {
        printf("%d ",*ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}

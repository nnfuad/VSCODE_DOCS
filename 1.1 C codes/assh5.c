#include <stdio.h>

int main() {
    int a, count = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &a);

    printf("Input %d elements in the array:\n", a);
    int arr1[a], arr2[a];

    for (int i = 0; i < a; i++) {
        printf("element-%d: ", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < a; i++) {
        int Unique = 1;
        for (int j = 0; j < a; j++) {
            if (i != j && arr1[i] == arr1[j]) {
                Unique = 0;
                break;
            }
        }

        if (Unique) {
            arr2[count] = arr1[i];
            count++;
        }
    }

    printf("The unique elements found in the array are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
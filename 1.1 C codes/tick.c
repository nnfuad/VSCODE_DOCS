#include <stdio.h>

int main() {
    int size;
    printf("Size : ");
    scanf("%d",&size);
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == size - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

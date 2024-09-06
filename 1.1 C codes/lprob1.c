#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 12; i++) {
        for (j = 1; j <= 4; j++) {
            if (j < 4) {
                printf("%d ", i * j);
            } else {
                printf("%d\n", i * 10);
            }
        }
    }

    return 0;
}

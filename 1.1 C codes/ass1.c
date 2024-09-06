#include <stdio.h>

int main() {
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j == 4) {
                printf("%d\n", i * 10);
            } else {
                printf("%d ", i * j);
            }
        }
    }

    return 0;
}

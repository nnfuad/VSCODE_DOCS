#include <stdio.h>

void recprint(int r, int n) {
    if (r > n) {
        return;
    } else {
        printf("%d\n", r);
        recprint(r + 1, n);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    recprint(1, a);
    return 0;
}

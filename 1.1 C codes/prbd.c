#include <stdio.h>
#include <stdint.h>
int main()
{
    uint32_t n;
    uint32_t s = (n * (n + 1)) / 2;
    scanf("%u",&n);
    printf("%u\n",s);
    return 0;
}
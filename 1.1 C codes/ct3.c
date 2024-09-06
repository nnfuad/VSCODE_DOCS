#include<stdio.h>
int main()
{
int x = 20, *y, *z;
// Assume address of x is 500
y = &x;
z = y;
*y++;
*z++;
x++;
printf("x = %d, y = %d, z =%d  %d\n", x, y, z,&x);
return 0; }
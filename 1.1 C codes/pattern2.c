#include<stdio.h>
int main()
{
int i, j, n;
printf("Enter a number: "); scanf("%d", &n);
for(i = 1; i <= n; i++) {
for(j = 1; j <= n; j++) if(i == 1 || i == n)
printf("*"); else{
if(j == n || j == 1 || j == i || j == n - i) printf("*");
else
printf(" ");
}
printf("\n"); }
return 0; 
}
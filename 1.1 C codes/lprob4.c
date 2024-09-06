#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is the largest number\n",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest number\n",b);
    }
    else if(a==b && b==c && a==c){
        printf("All numbers are equal\n");
    }
    else printf("%d is the largest number",c);
    return 0;
}
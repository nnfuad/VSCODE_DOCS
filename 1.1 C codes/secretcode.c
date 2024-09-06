#include <stdio.h>
#include <unistd.h>
int main()
{
    int a;
    printf("Enter the secret code\n");
    scanf("%d",&a);
    if(a==29){
        printf("Holy ship...\n");
        usleep(1000000);
        printf("You guessed it right...\n");
    }
    else{
        for(int i=1;i<=29;i++){
                   printf("Hard luck\n");
                   usleep(100000);
        }
    }
    return 0;
}
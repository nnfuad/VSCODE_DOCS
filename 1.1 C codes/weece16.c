#include <stdio.h>
int main(){
    int arr[1000000],count = 1;
    for(int i = 0 ;i<1000000;i++){
        scanf("%d",&arr[i]);
        count++;
        if((arr[i] == 0) && (arr[i+1] == 0)){
            count-=2;
            break;
        }
    }
    for(int i = 0 ; i<(count); i+=2)
    {
        for(int j = 0 ; j<arr[i]; j++)
        {
            for(int k = 0; k<arr[i+1];k++)
            {
            printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }

}
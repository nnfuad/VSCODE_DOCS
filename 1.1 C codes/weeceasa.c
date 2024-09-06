#include <stdio.h>
int main(){
    int a,count = 0;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i<a; i++)
    {   
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<a ; i++){
        if(arr[i] == 1){
            count =1;
        }
    }
    if(count == 0)
    {
        printf("EASY\n");
    }
    else printf("HARD\n");
}

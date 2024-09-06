//insert 45 to positon 5
//delete 6th position
#include <stdio.h>
int main(){
/*    int arr[]= {1,2,4,5,6,7,8,9,10};
    for(int i = 0 ; i>=4 ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[4] = 45;
    for(int i = 0 ; i<9 ; i++)
    {
        printf("%d ",arr[i]);
    }*/
    int arr[]= {1,2,4,5,6,7,8,9,10};
    for(int i=6 ; i<=8 ; i++)
    {
        arr[i-1]= arr[i];
    }
    for(int i = 0 ; i<8 ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
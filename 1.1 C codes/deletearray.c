//delete an array's 4th element
#include <stdio.h>
int main(){
    int arr[100] = {1,2,3,4,5,6};
    for(int i = 4 ; i<=5 ; i++){
        arr[i-1] = arr [i];
    }
    for(int i = 0; i<=4 ; i++){
        printf("%d ",arr[i]);
    }
}
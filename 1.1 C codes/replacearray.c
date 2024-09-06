//add an element to the third position of an array
#include <stdio.h>
int main(){
    int arr[100] = {1,2,3,4,5,6};
    for(int i = 5 ; i>=2 ; i--){
        arr[i+1] = arr[i];
    }
    arr[2] = 7;
    for(int j=0 ; j<7 ; j++){
        printf("%d ",arr[j]);
    }
}
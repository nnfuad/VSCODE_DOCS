#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=1900) printf("Division 1\n");
        if(arr[i]>=1600 && arr[i]<=1899) printf("Division 2\n");
        if(arr[i]>=1400 && arr[i]<=1599) printf("Division 3\n");
        if(arr[i]<=1399) printf("Division 4\n");

    }

}
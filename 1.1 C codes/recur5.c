#include <stdio.h>
long long unsigned BIGNUM = 1000000;

int f91(int arr)
{
    if(arr<=100){
        return f91(f91(arr+11));
    }
    if(arr>=101)
    {
        return arr-10;
    }
    else return -1;
}

int main(){
    int arr;
    for(int i = 0 ; i<BIGNUM ; i++)
    {
        scanf("%d",&arr);
        if(arr == 0) break;
        else{
        int f = f91(arr);
        printf("f91(%d) = %d\n",arr,f);
        }
    }

}
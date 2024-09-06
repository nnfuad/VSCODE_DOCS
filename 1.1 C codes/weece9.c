#include <stdio.h>
int main(){
    /*int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a >= b && a>=c ){
        if()
    } 
    {printf("%d %d %d\n",c,b,a);}
    if(a >= b && a>=c && b<=c) {printf("%d %d %d\n",b,c,a);}
    if(b >= a && b>=c && a>=c) {printf("%d %d %d\n",c,a,b);}
    if(b >= a && b>=c && a<=c) {printf("%d %d %d\n",a,c,b);}
    if(c >= a && c>=b && b>=a) {printf("%d %d %d\n",a,b,c);}
    if(c >= a && c>=b && b<=a) {printf("%d %d %d\n",b,a,c);}*/
    int arr[3],temp;
    for(int i = 0 ; i<3 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<2 ;i++)
    {
        for(int j = 0 ;j<3-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i<3 ; i++)
    {
        if(i == 2) printf("%d\n",arr[i]);
        else printf("%d ",arr[i]);
    }
    return 0;
}
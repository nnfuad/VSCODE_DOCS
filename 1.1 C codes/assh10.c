#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row or column number=");
    scanf("%d", &n);
    int arr[n] [n],sumr[n],sumc[n];
    for(int i=0; i<2*n; i++)
    {
        if(i<n)
        {
            sumr[i]=0;
        }
        else
        {
            sumc[i-n]=0;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
            sumr[i]+=arr[i][j];
        }
    }
    for(int j=0; j<n ; j++)
    {
        for(int i=0; i<n; i++)
        {
            sumc[j]+=arr[i][j];
        }
    }
    for(int i=0; i<2*n; i++)
    {
        if(i<n)
        {
            printf("Sum of the row %d=%d\n",(i+1),sumr[i]);
        }
        else
        {
            printf("Sum of the column %d=%d\n",(i-n+1),sumc[i-n]);
        }
    }
    return 0;
}


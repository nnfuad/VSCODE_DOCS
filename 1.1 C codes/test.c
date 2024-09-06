/*#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char s[1000];
    printf("Enter the name: ");
    fgets(s,sizeof(s),stdin);
    printf("The name you gave as input was: ");
    puts(s);
    for(int i=0 ;i<(strlen(s));i++)
        {
            if(s[i] == ' ') {count++;}
        }
    
}*/
/*#include <stdio.h>
int main()
{
    typedef int num;
    num num1=5;
    printf("%d",num1);
}*/
/*#include <stdio.h>
int main()
{
    char s[] = {'a','b','c','\n','c','\n'};
    char *p,*str,*str1;
    p=&s[3];
    str=p;
    str1=s;
    printf("%d",++*p + ++*str1-32);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int i = 5;
    int a= ++i + ++i + ++i;
    printf("%d\n",a);
}*/
/*#include <stdio.h>
#define sqrt(x) ++x * ++x
int main()
{
    int a=3,z;
    z= ++a * ++a;
    a=3;
    printf("%d %d",sqrt(a),z);
}
*/
/*#include <stdio.h>

void exampleFunction(int arr[], size_t size) {
    printf("Size of arr in the function: %zu bytes\n", size);
}

int main() {
    int myArray[10];
    size_t size = sizeof(myArray);
    
    printf("Size of myArray in main: %zu bytes\n", size);
    
    exampleFunction(myArray, size / sizeof(int));

    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int frr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&frr[i]);
    }
    scanf("%d",&m);
    int srr[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&srr[i]);
    }
    int arr[n+m];
    for(int i=0; i<n; i++)
    {
        arr[i]=frr[i];
    }
    for(int i=0; i<m; i++)
    {
        arr[i+n]=srr[i];
    }
    for(int i=0; i<(n+m); i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}
*/
/*#include <stdio.h>
int main()
{
    int arr[10],temp;
    for(int i = 0 ; i<10 ; i++)
    {
    scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<10-1 ; i++)
    {
        for(int j=0 ; j<10-1-i ; j++){
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
}*/
/*#include <stdio.h>

struct book
{
    int ID;
    char name[1000];
    int price;
};

int main()
{
    struct book b[4];
    for(int i = 0;i<4 ; i++)
    {
        printf("ID: ");
        scanf("%d",&b[i].ID);
        printf("Name: ");
        scanf("%s",b[i].name);
        printf("Price: ");
        scanf("%d",&b[i].price);
    }
    /*b1[4] = b2[4];
    int temp;
    for(int i=0 ;i<4-1; i++)
        for(int j=0 ; j<3-i; j++)
        {
            if(b[j].price>b[j+1].price)
            {
                temp = b[j].price;
                b[j].price = b[j+1].price;
                b[j+1].price = temp;
            }
        }
        */
        /*int max=0,maxc = 0,min=0,minc = 0;
        for(int i= 0 ; i<4 ; i++){
            if(b[i].price > max)
            {
                max=b[i].price;
                maxc = i;
            }
        }
        min=max;
        for(int i= 0 ; i<4 ; i++){
            if(b[i].price < min)
            {
                min=b[i].price;
                minc = i;
            }
        }
        printf("Highest value book is:");
        puts(b[maxc].name);
        printf("Lowest value book is:");
        puts(b[minc].name);


}*/
/*#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the row or column number=");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x=(n-1),y=0;
    for(;;)
    {
        if(x<0) break;
        sum+=arr[x][y];
        x--;
        y++;
    }
    printf("The sum of the right diagonal is=%d\n",sum);
    return 0;
}*/
/*#include<stdio.h>
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
*/
/*#include <stdio.h>
int main()
{
    int x,y=0;
    char z="6";
    x=y+z;
    printf("%d\n",x+1);
}*/
/*#include <stdio.h>
int main(){
char ch='Y'; 
switch (ch){
case 'Y': printf("Don't");
 case 'N': printf("Mistake"); 
 default: printf("Yes");
}
}*/
/*#include <stdio.h>
int fact(int n)
{
    if(n == 1 || n== 0){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",fact(a));

}*/
/*#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    int frequency[256] = {0}; // Assuming ASCII characters

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; i < strlen(inputString); i++) {
        char currentChar = inputString[i];
        frequency[currentChar]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int sum ,j,i,k;
    sum =0 ;
    k=2;
    for(i = 1 ;i<= 5 ;i++)
    {
        for(j=1 ; j<=5 ;j++)
        {
            if(j%k == 0)
            sum = sum+1;
        }
        printf("%d\n",sum);
    }
}
*/
/*#include <stdio.h>
int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    while(a){
        sum +=a;
        a--;
    }
    printf("%d\n",sum);
}*/
/*#include <stdio.h>
int main()
{
    int b=5;
    for (int i= 0 ; i<6 ; i++)
    {
        b*= i;
    }
    printf("%d\n",b);
}*/
/*#include <stdio.h>
struct test{
    unsigned int x : 20;
    unsigned int y : 20;
    unsigned int z : 2;
};
int main()
{
    struct test arr[6];
    printf("%d\n",sizeof(arr));
}*/
/*#include <stdio.h>
int main(){
    int x;
if (scanf("%d", &x) == 1)
{
printf("%d", x);
}
}*/
/*#include <stdio.h>
int main()
{
    int row, column, rsum[3] = {0}, csum[3] = {0}, sum1 = 0, sum2 = 0;
    scanf("%d %d", &row, &column);
    int arr[row][column]; //{0, 0, 0, 0, 0, 1, 1, 1, 1}
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            if (i + j == row-1)
            {
                sum2 += arr[i][j];
            }
            rsum[i] += arr[i][j];
            csum[i] += arr[j][i];
        }
    }

    for (int i = 0; i < row; i++)
    {
        if (rsum[i] == 0)
        {
            printf("All 0s on row %d\n", i + 1);
        }
        else if (rsum[i] == 3)
        {
            printf("All 1s on row %d\n", i + 1);
        }
        if (csum[i] == 0)
        {
            printf("All 0s on column %d\n", i + 1);
        }
        else if (csum[i] == 3)
        {
            printf("All 1s on column %d\n", i + 1);
        }
    }
    if (sum1 == 0)
    {
        printf("All 0s on left diagonal\n");
    }
    else if (sum1 == 3)
    {
        printf("All 1s on left diagonal\n");
    }
    if (sum2 == 0)
    {
        printf("All 0s on right diagonal\n");
    }
    else if (sum2 == 3)
    {
        printf("All 1s on right diagonal\n");
    }
}*/
#include <stdio.h>
#define unsigned long ul
int main(){
    ul a = 123124234314;
    printf("%llu\n",a);
}
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    
}
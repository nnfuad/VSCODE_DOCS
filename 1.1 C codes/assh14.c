#include <stdio.h>
#include <string.h>
void bubblesort(char arr[]){
    char temp;
    int n = strlen(arr);
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j = 0 ; j<n-1-i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    char arr1[1000],arr2[1000],arr3[1000],arr4[1000];
    printf("Input the first String:");
    scanf("%s",&arr1);
    printf("Input the second String:");
    scanf("%s",&arr2);
    strcpy(arr3,arr1);
    strcpy(arr4,arr2);
    bubblesort(arr1);
    bubblesort(arr2);
    if(strcmp(arr1,arr2) == 0)
    {
        printf("%s and %s are Anagram\n",arr3,arr4);
    }
    else    printf("%s and %s are not Anagram\n",arr3,arr4);
}
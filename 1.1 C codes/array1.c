#include <stdio.h>
int main(){
    int a ;
    char ch ;
    float fl ;
    //int arr[2+3] ;
    int arr1[5] ;
    char arr2[5] ;
    float arr3[5] ;
    printf("int size %d byte\n", sizeof(a));
    printf("char size is %d byte\n", sizeof(ch));
    printf("float size is %d byte\n", sizeof(fl));
    printf("int array size is %d byte\n", sizeof(arr1));
    printf("char array size is %d byte\n", sizeof(arr2));
    printf("float array size is %d byte\n", sizeof(arr3));
    // arr1[]; can't compile
    // arr1[]={1,2,3}; can compile
    // arr2[5]={a,b,c,d,e,f}; can't compile 

}
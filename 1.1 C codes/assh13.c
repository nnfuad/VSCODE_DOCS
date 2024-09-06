#include <stdio.h>
void prime( int a){
  int  count=0;
  for (int i=2;i<a;i++){
      if(a%i ==0){
          count=1;}
  }
  
    if(count == 0){
        printf("%d is a prime number\n",a);}
        else printf("%d is not a prime number\n",a);
}
int main(){
 int a;
 scanf("%d",&a);
 prime(a);
 return 0;
}
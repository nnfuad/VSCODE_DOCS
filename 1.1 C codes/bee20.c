#include <stdio.h>
int main(){
    int s,h,m,count,count1;
    scanf("%d",&s);
    if(s <60){
        printf("%d:%d:%d\n",0,0,s);
    }
    else{
        m = s/60;
        s = s%60;
    if(m>60){
        h = m/60;
        m = m%60;
        printf("%d:%d:%d\n",h,m,s);        
    }
    else {
            printf("%d:%d:%d\n",0,m,s);
    }
    }
    return 0;
}
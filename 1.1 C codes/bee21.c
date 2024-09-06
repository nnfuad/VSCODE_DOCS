#include <stdio.h>
int main(){
    int d,m,a,count,count1;
    scanf("%d",&d);
    if(d < 30){
        printf("0 ano(s)\n0 mes(es)\n%d dia(s)\n",d);
    }
    else{
        m = d/30;
        if(m>12){
            a = d/365;
            count = d%365;
            m = count/30;
            count1 = count%30;
            d = count1;
            printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
        }
        else{    
            d = d%30;
            printf("0 ano(s)\n%d mes(es)\n%d dia(s)\n",m,d);
        }
    }
    
    return 0;
}

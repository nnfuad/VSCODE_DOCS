# include <stdio.h>
 #include <string.h>
int main(){
    //char str[][100]={"Palestine","Bangladesh","Canada","Australia","New zealand"};
    char *str[]={"Palestine","Bangladesh","Canada","Australia","New zealand"};
    for(int i=0; i<5; i++){
        if((strcmp(str[i],"Palestine")==0)){
            printf("Palestine was found.\n");
            return 0;
        }
    }
    printf("Not found\n");
}
#include <stdio.h>
#include <string.h>
int main(void){
    char *name[]={"Fuad","Kowshik","Araf"};
    char *number[]={"01634643144","01314454465","01777880789"};
    for( int i= 0; i<3 ; i++){
        if(strcmp(name[i],"Kowshik") == 0){
            printf("%s\n",number[i]);
            return 0;
            
        }
    }
    printf("Not found\n");
}

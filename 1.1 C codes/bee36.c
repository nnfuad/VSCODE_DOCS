#include <stdio.h>
#include <string.h>
int main()
{   
    char vert[20],g[10],c[20];
    scanf("%s",vert);
    scanf("%s",g);
    scanf("%s",c);

    if (strcmp(vert,"vertebrado") == 0 && strcmp(g,"ave") == 0 && strcmp(c,"carnivoro")==0){
        printf("aguia\n");
        }

    if (strcmp(vert,"vertebrado") == 0 && strcmp(g,"ave") == 0 && strcmp(c,"onivoro")==0){
        printf("pomba\n");
        }

    if (strcmp(vert,"vertebrado") == 0 && strcmp(g,"mamifero") == 0 && strcmp(c,"onivoro")==0){
        printf("homem\n");
        }

    if (strcmp(vert,"vertebrado") == 0 && strcmp(g,"mamifero") == 0 && strcmp(c,"herbivoro")==0){
        printf("vaca\n");
        }

    if (strcmp(vert,"invertebrado") == 0 && strcmp(g,"inseto") == 0 && strcmp(c,"hematofago")==0){
        printf("pulga\n");
        }

    if (strcmp(vert,"invertebrado") == 0 && strcmp(g,"inseto") == 0 && strcmp(c,"herbivoro")==0){
        printf("lagarta\n");
        }

    if (strcmp(vert,"invertebrado") == 0 && strcmp(g,"anelideo") == 0 && strcmp(c,"hematofago")==0){
        printf("sanguessuga\n");
        }

    if (strcmp(vert,"invertebrado") == 0 && strcmp(g,"anelideo") == 0 && strcmp(c,"onivoro")==0){
        printf("minhoca\n");
        }
}
#include <stdio.h>
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
        int max=0,maxc = 0,min=0,minc = 0;
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

        printf("Books within the price range 200-300 are:\n");
        for(int i=0; i<4; i++)
        {
            if((b[i].price <= 300) && (b[i].price >= 200))
            {
                printf("ID: %d\n",b[i].ID);
                printf("Name: %s\n",b[i].name);
                printf("Price: %d\n",b[i].price);
            }
        }
        


}


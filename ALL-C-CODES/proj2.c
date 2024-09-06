//Do not modify
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

void addproduct(){
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(p.date, myDate);

    fo = fopen("gain.txt", "ab");

    printf("Enter product id: ");
    scanf("%d",&p.id);

    printf("Enter product name: ");
    fflush(stdin);
    gets(p.name);

    printf("Enter Quantity: ");
    scanf("%d",&p.quantity);

    printf("Enter product price ^per unit^");
    scanf("%d",&p.price);

    printf("Product Added Successfully");

    fwrite(&p, sizeof(p), 1, fo);
    fclose(fo);
}


void productlist(){

    system("cls");
    printf("<== Available Products ==>\n\n");
    printf("%-20s %-30s %-20s %-20s %s\n\n", "Product id", "Product Name", "Quantity", "Price", "Date");

    fo = fopen("gain.txt", "rb");
    while(fread(&p, sizeof(p), 1, fo) == 1){
        printf("%-20d %-30s %-20d %-20d %s\n", p.id, p.name, p.quantity, p.price, p.date);
    }

    fclose(fo);
}

void delproduct (){
    int id;
    int counter=0;
    system("cls");
    printf("<== Remove Products ==>\n\n");
    printf("Enter Product ID to remove: ");
    scanf("%d",&id);
    FILE *fr;

    fo = fopen("gain.txt", "rb");
    fr = fopen("pain.txt", "wb");

    while(fread(&p, sizeof(p), 1, fo) == 1){
        if(id == p.id){
            counter=1;
        }else{
            fwrite(&p, sizeof(p), 1, fr);
        }
    }

    if(counter==1){
        printf("\n\nDeleted Successfully.");
    }else{
        printf("\n\nRecord Not Found !");
    }

    fclose(fo);
    fclose(fr);

    remove("gain.txt");
    rename("pain.txt", "gain.txt");

}


void buy()
{
    int bid,counter=0,pq;
    system("ClS");
    printf("Buy Products");
    printf("Enter product id to buy--");
    scanf("%d",&bid);
    printf("Enter Quantity:");
    scanf("%d",&pq);
    FILE *fo;
    fo=fopen("gain.txt","rb+");
    while(fread(&p,sizeof(p),1,fo)==1)
    {
        if(bid==p.id)
        {
            counter=1;
            p.quantity=p.quantity-pq;
            fseek(fo,-sizeof(p),1);
            fwrite(&p,sizeof(p),1,fo);
            fclose(fo);
            if(p.quantity==0)
            {
                delproduct(p.id);
            }
            break;
        }
    }
    if(counter==1)
    {
        printf("\nProduct bought successfully");


    }
    else
    {
        printf("\n\nProduct not fount");
    }
}


struct product{
    int id;
    char name[50];
    //char category[20];
    int quantity;
    int price;
    char date[12];

}p;


struct purchase
{
    int id;
    int quantity;
    char date[12];
    char name[50];
}b;


FILE *fo;

int main(){

    int choice;

    while(1){
        system("cls");
        printf("\t\t\t\t\tWelcome to Inventory Management System \n");
        printf("1.Add Product\n");
        printf("2.Products List\n");
        printf("3.Remove Product\n");
        printf("4.Buy Product\n");
        printf("5.Sell List\n");
        printf("0.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 0:
            exit(0);

        case 1:
            addproduct();
            break;

        case 2:
            productlist();
            break;

        case 3:
            delproduct();
            break;

        case 4:
            buy();
            break;

        /*case 5:
            buylist();
            break;*/

        default:
            printf("Invalid Choice...\n\n");

        }
        printf("Press Any Key To Continue...");
        getch();
    }

    return 0;
}


    void buylist(){
    system("cls");
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(b.date, myDate);
    


    // Open file for writing
    FILE* buylist_file = fopen("buylist.txt", "w");
    if (buylist_file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Sold Products List\n\n");
        printf("%-10s %-30s %-20s %-10s  %s\n\n", "Product ID", "Name", "Quantity", "Total amount", "Date");
        fo = fopen("bought.txt", "rb");
    while(fread(&p, sizeof(p), 1, fo) == 1){
        printf("%-10d %-30s %-20s %-10d  %s\n", b.id, p.name, b.quantity, p.price, b.date);
    }

    fclose(fo);


    fprintf(buylist_file, "%-10s %-30s %-20s %-10s  %s\n\n", "Product ID", "Name", "Quantity", "Total amount", "Date");

    for (int i = 0; i<12 ; i++) {
        
        fprintf(buylist_file, "%-10d %-30s %-20d %-10d  %s\n", /* product data */);
    }

    fclose(buylist_file);
}


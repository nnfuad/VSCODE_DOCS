#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct student s[4];
    for(int i = 0;i<4 ; i++)
    {
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("Roll: ");
        scanf("%d",&s[i].roll);
        printf("Marks: ");
        scanf("%d",&s[i].marks);
    }
            printf("\n");

        
        int avg,total=0;
        for(int i = 0;i<4;i++){
            total+=s[i].marks;
        }
        printf("Average mark is %d\n",total/4);
        printf("Students whose marks are below 50 are:\n");
        for(int i=0 ; i<4 ; i++)
            {
                if(s[i].marks < 50)
                {
                    printf("%s\n",s[i].name);
                }

            }



}

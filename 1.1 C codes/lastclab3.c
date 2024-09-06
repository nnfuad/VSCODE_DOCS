#include <stdio.h>
struct student
{
    char name[60];
    int roll;
};
struct university
{
    char dept[60];
    struct student s1[2];
};
int main()
{
    struct university s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter department name: ");
        scanf("%s", s[i].dept);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("Enter name for department %s: ", s[i].dept);
            scanf("%s", s[i].s1[j].name);

            printf("Enter roll for department %s: ", s[i].dept);
            scanf("%d", &s[i].s1[j].roll);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%s\n", s[i].s1[j].name);
            printf("%d\n", s[i].s1[j].roll);
        }
    }
    return 0;
}
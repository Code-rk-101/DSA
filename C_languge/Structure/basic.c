#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int roll;
        char name[10];
        char dept[20];
    };
   
    struct student first;

    printf("Enter the name : ");
    gets(first.name);
    
    printf("Enter the dept : ");
    gets(first.dept);

    printf("Enter the roll no : ");
    scanf("%d",&first.roll);

    puts(first.name);   
    printf("%d\n",first.roll);
    puts(first.dept);

return 0;
}
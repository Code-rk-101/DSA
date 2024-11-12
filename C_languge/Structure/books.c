#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[20];
        int price;
        int pages;
    }b1,b2,b3;

    printf("Enter the name of book : ");
    gets(b1.name);
    

    printf("Enter the price of book : ");
    scanf("%d",&b1.price);

    printf("Enter the no of pages  of book : ");
    scanf("%d",&b1.pages);

    printf("The name of book : ");    
    puts(b1.name);
    printf("The price of book : ");
    printf("%d\n",b1.price);
    printf("The no of pages  of book : ");
    printf("%d",b1.pages);

}
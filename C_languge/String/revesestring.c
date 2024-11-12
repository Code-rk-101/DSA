#include<stdio.h>
#include<string.h>
int main()
{
    // int n;
    // printf("Enter the size of string : ");
    // scanf("%d",&n);
    char str[50];
    printf("Enter the string : ");
    gets(str);
    int size=0;
    int i=0;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    for(int i=0;i<size/2;i++)
    {
        char temp=str[size-1-i];
        str[size-i-1]=str[i];
        str[i]=temp;
    }
    printf("The revese string is : ");
    puts(str);
return 0;
}
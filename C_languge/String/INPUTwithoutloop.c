#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    //method 1.
    // scanf("%s",str);
    // printf("the input is : %s",str);

//method 2
    gets(str);
    puts("the input is");
    puts(str);
    return 0;
}
#include<stdio.h>
int fact(int a)
{
    if(a==1)
    return 1;
    else
    return a*fact(a-1);
}
int main()
{
    int a;
    printf("Enter a no ");
    scanf("%d",&a);
    int f=fact(a);
     printf("%d",f);
    return 0;
}
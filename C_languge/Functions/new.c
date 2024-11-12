#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d",&a);
    int next(int x);//prototype
    b=next(a);
    printf("%d",b);
    return 0;
}
int next(int x)
{
    return x+1;
}

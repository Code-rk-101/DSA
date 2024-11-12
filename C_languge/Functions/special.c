#include<stdio.h>
int mini(int x,int y)
{
    int c;
    if(x<y)
    {
        c=x;
    }
    else
    {
        c=y;
    }
    return c;
}
int main()
{
    int a,b,min;
    printf("enter 1st no ");
    scanf("%d",&a);
    printf("enter 2nd no ");
    scanf("%d",&b);
    min= mini(a,b);
    printf("Minimiun of 1st and 2nd no is %d ",min);
    return 0;
}
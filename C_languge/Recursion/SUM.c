#include<stdio.h>
int sum2(int x)//method 1
{
    if(x==1)
        return 1;
    return x+sum2(x-1);;
}
void sum1(int x,int y)//method 2
{
    if(x==0)
    {
        printf("%d\n",y);
        return ;
    }
    else
    {
        sum1(x-1,y+x);
        return ;
    }
}
int main()
{ int a,y;
    printf("ENTER a no ");
    scanf("%d",&a);
    sum1(a,0);
    y=sum2(a);
    printf("%d",y);
    return 0;
}
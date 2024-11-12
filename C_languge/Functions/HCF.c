#include<stdio.h>
int min(int x,int y)
{
    if (x>y)
    return y;
    else
    return x;
}
int hf(int a,int b)
{
    int c;
    for(int i=min(a,b);i<=1;i++)
    {
        if( a%i==0 && b%i==0)
        {
            c=i;
            break;
        }
        return c;
    }
}
int main()
{
    int a,b;
    printf("Enter the first no ");
    scanf("%d",&a);
    printf("Enter the second no ");
    scanf("%d",&b);
    int Hcf=hf(a,b);
    printf("%d",Hcf);
return 0;
}
#include<stdio.h>
int main ()
{
    int n,r;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    // printf("Enter the no of columns: ");
    // scanf("%d",&r);
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            int ncr(int x,int y);
            int l=ncr(i,k);
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}
int ncr(int x,int y)
{
    int f(int c);
    int ncrf=f(x)/(f(y)* f(x-y));
    return ncrf;
}
int f(int c)
{
    int p=1;
    for(int m=1;m<=c;m++)
    {
        p=p*m;
    }
    return p;
}
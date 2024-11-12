#include<stdio.h>
int fact(int x)
{
    int n=1;
    for(int i=1;i<=x;i++)
    {
        n=i*n;
    }
    return n;
}
int main()
{
    int n;
    printf("Enter the no ");
    scanf("%d",&n);
    int m;
    for(int i=1;i<=n;i++)
    {
        m=fact(i);
        printf("%d\n",m);
    }
    
return 0;
}
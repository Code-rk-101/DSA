#include<stdio.h>
int main()
{
    int n;
    printf("Enrer a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
             printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            int npr(int a,int b);
            int x=npr(i,k);
            printf("%d     ",x);

        }
        printf("\n");
       
    }

    return 0;
}
int npr(int a,int b)
{
    int fa(int c);
    int l=fa(a)/fa(a-b);
    return l;
}
int fa(int c)
{
    int m=1;
    for(int p=1;p<=c;p++)
    {
        m=m*p;
        
    }
    return m;
}

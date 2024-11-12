#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        
        int ncr=1;
        for(int k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        printf("1 ");
        for(int j=0;j<=i;j++)
        {
            ncr=ncr*(i-j)/(j+1);
            if(ncr!=0)
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}
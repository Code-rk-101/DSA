#include<stdio.h>
int fact(int x)
{
    int y=1;
    for(int i=1;i<=x;i++)
    {
        y=y*i;
    }
    return y;
}
int main()
{
    int n,r;
    int nf,rf,nrf,nr;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter r");
    scanf("%d",&r);
    // nr=n-r;      type 1
    // nf=fact(n);
    // rf=fact(r);
    //nrf=fact(nr);
    int nc =fact(n)/(fact(r)*fact(n-r));//type 2
    printf("%d",nc);
    return 0;
}
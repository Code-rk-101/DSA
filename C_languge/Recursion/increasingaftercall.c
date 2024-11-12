#include<stdio.h>
void dec(int x)
{
    if(x==0)
    return ;
    dec(x-1);
    printf("%d\n",x);
    return ;
}
int main()
{ int a;
    printf("ENTER a no ");
    scanf("%d",&a);
    dec(a);
    return 0;
}
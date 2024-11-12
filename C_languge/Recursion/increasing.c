#include<stdio.h>
void incr(int x,int y)
{
    if(x==y)
    return ;
    printf("%d\n", x);
    return incr(x+1,y);
}
int main()
{ int a;
    printf("ENTER a no ");
    scanf("%d",&a);
    incr(1,a);
    return 0;
}
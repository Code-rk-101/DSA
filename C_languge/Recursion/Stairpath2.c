#include<stdio.h>
int stair(int x)
{
    if(x==1||x==2) return x;
    if(x==3) return 4;
    return stair(x-1)+stair(x-2)+stair(x-3);//multple call

}
int main()
{ int a;
    printf("ENTER a no  of stairs\n");
    scanf("%d",&a);
    int n=stair(a);
    printf("%d",n);
    return 0;
}
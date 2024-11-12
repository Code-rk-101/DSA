#include<stdio.h>
int stair(int x)
{
    if(x==1||x==2) return x;
    return stair(x-1)+stair(x-2);//multple call

}
int main()
{ int a;
    printf("ENTER a no  of stairs\n");
    scanf("%d",&a);
    int n=stair(a);
    printf("%d",n);
    return 0;
}
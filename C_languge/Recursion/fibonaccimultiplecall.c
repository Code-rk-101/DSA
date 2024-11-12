#include<stdio.h>
int fibo(int x)
{
    if(x==1||x==2) return 1;
    return fibo(x-1)+fibo(x-2);//multple call

}
int main()
{ int a;
    printf("ENTER a no ");
    scanf("%d",&a);
    int n=fibo(a);
    printf("%d",n);
    return 0;
}
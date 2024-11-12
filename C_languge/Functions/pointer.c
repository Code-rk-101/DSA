#include<stdio.h>
int main()
{
    int a=9;
    printf("%d\n",a);
    printf("%p\n",&a);
    int* x=&a;
    printf("%p\n",x);
    printf("%p\n",&x);
    return 0;
}
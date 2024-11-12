#include<stdio.h>
void a()
{
    printf("A for Apple\n");
    return ;
}
void b()
{
    printf("B for ball\n");
    return;
}
int main()
{
    a();
    printf("A is called\n");
    b();
    printf("B is called\n");
    return 0;
}


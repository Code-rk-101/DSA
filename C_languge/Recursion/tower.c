#include<stdio.h>
void tower  (int n,char s,char h,char d)
{   
    if(n==0)
    return;
    tower(n-1,s,d,h);
    printf("%c to %c\n",s,d);
    tower(n-1,h,s,d);
    return ;
}
int main ()
{
    int a;
    char s ='A',h='B',d='C';
    printf("Enter no of disks : ");
    scanf("%d",&a);
    tower(a,s,h,d);
    return 0;
}
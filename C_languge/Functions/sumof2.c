#include<stdio.h>
 int add(int x,int y)
 {
    return x+y;
 }
 int main()
 {
    int a,b,sum;
    printf("enter 1st no ");
    scanf("%d",&a);
    printf("enter 2st no ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("%d",sum);
    return 0;

 }
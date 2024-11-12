#include<stdio.h>
int power(int a,int b)//method 1
{
    if(b==0)return 1;
   if(b==1)return a;
   int c;
    int s=power(a,(b)/2);
   if(b%2==0)
   {
     c=s*s;
   }
   else
   {
    c= a*s*s;
   }
    return c;
}

int main()
{
    int a,b;
    printf("Enter base ");
    scanf("%d",&a);
    printf("Enter the power ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
return 0;
}
#include<stdio.h>
int power(int a,int b)//method 1
{
   if(b==0)return 1;
    return a*power(a,b-1);
}
void powr(int x,int y,int z)//method 2
{
    if(y==0)
    {
    printf("%d\n",z);
    return;
    }
    z=z*x;
    y=y-1;
    powr(x,y,z);
    return;
    
}
int main()
{
    int a,b;
    printf("Enter base ");
    scanf("%d",&a);
    printf("Enter the power ");
    scanf("%d",&b);
    powr(a,b,1);
    int p=power(a,b);
    printf("%d",p);
return 0;
}
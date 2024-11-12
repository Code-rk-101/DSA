#include<stdio.h>
int maze(int ir,int ic,int er ,int ec)
{int right=0;
 int down=0;
    if(ir==er && ic==ec)
    return 1;
    if(ir==er)
    right +=maze(ir,ic+1,er,ec);
    if(ic==ec)
    down +=maze(ir+ 1,ic,er,ec);
    if(ir<er&&ic<ec)
    {
    right +=maze(ir,ic+1,er,ec);
    down +=maze(ir+ 1,ic,er,ec);
    }
    int totalways= right+down;
    return totalways;
}
int main ()
{
    int a,b;
    printf("enter the no of rows\n:  ");
    scanf("%d",&a);  
    printf("enter the no of columns\n: ");
    scanf("%d",&b);
    int ans = maze(1,1,a,b);
    printf("no of ways are %d ",ans);
    return 0;
}
#include<stdio.h>
int main ()
{
    int r,c;
    printf("Enter no of rows : ");
    scanf("%d",&r);
    printf("Enter no of rows : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        {
            printf("Enter the element of row %d and column %d :  ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0,count =0,I,b=0;
    for(int i=0;i<r;i++)
    {
         a=0;
        for(int j =0;j<c;j++)
        {
            if(arr[i][j]==1)
            {
                a++;
            }
        }
        b=a+b;
        if(count<a)
        {
            count=a;
            I=i;
        }
    }
    printf("Total no of 1s are : %d",b);
    printf("\nMax no of 1s are %d in row %d",count,I);
    return 0;
}
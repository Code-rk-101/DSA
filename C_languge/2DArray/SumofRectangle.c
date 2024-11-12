#include<stdio.h>
int main()
{
    int a,b,l1,r1,l2,r2,sum=0;
    printf("Enter the  no of rows : ");
    scanf("%d",&a);
    printf("\nEnter the  no of columns : ");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the  no of rows from sum start : ");
    scanf("%d",&l1);
    printf("Enter the  no of rows from sum end : ");
    scanf("%d",&l2);
    printf("Enter the  no of column from sum start : ");
    scanf("%d",&r1);
    printf("Enter the  no of column from sum end : ");
    scanf("%d",&r2);
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter the element of row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("| %d |",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=l1-1;i<l2;i++)
    {
        for(int j=r1-1;j<r2;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;

}
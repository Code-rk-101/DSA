#include<stdio.h>
int main()
{   int a,b;
    printf("Enter the  no of rows : ");
    scanf("%d",&a);
    printf("\nEnter the  no of columns : ");
    scanf("%d",&b);
    int arr[a][b];
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
    int check1=arr[0][0],I,J;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]>check1)
            {
                check1=arr[i][j];
                I=i;
                J=j;
            }   
        }
    }
    int check2=__INT_MAX__,I1,J1;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]<check2)
            {
                check2=arr[i][j];
                I1=i;
                J1=j;
            }   
        }
    }
    printf("The minimum value in matrix id : %d at indiex (%d,%d) \n",check2,I1,J1);
    printf("The maximum value in matrix id : %d at indiex (%d,%d) ",check1,I,J);
    return 0;
}
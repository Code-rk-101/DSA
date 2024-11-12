#include <stdio.h>
int main()
{   int a,b;
    printf("Enter the no of rows : ");
    scanf("%d",&a);
    printf("Enter the no of colunns : ");
    scanf("%d",&b);
    int arr[a][b];
    int brr[a][b];
    int crr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("Enter the elements of 1st matrix : ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0;i<a;i++)
    {
        for(int k=0;k<b;k++)
        {
            printf("Enter the elements of 2nd matrix : ");
            scanf("%d", &brr[i][k]);
        }
    }
    for(int i = 0;i<a;i++)
    {
        for(int k=0;k<b;k++)
        {
            crr[i][k]=arr[i][k]+brr[i][k];
        }
    }
    printf("The sum of matrix is : \n");
    //we can use only two matrix for addition arr[i][j]=arr[i][j]+ brr[[i][j] 
    for(int i = 0;i<a;i++)
    {
        for(int k=0;k<b;k++)
        {
            printf("|%d|",crr[i][k]);
            
        }
        printf("\n");
    }
    return 0;
}
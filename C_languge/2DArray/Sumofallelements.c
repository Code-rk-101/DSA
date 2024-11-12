#include<stdio.h>
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
    int sum=0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of all elements of matrix : ");
    printf("|%d|",sum);
    return 0;
}
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the %d element of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReverse array is :\n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[n-j-1]);
    }

    return 0;
}
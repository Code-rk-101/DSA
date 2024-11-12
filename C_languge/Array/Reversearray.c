#include<stdio.h>
int main()
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
    int brr[n];
    printf("\nThe elements of  reverse array is : ");
    for(int j=0;j<n;j++)
    {
        brr[j]=arr[n-j-1];
        printf("%d ",brr[j]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the no of rotatioin of array: ");
    scanf("%d",&k);
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
    for(int j=0;j<k%n;j++)
    {
        int temp=arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            arr[n-1-i]=arr[n-2-i];
        }
        arr[0]=temp;
    }
    printf("\nThe array after rotation %d times is :\n",k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("\nEnter the %d element of array : ",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=arr[i]*2;
        }
    }
    printf("New array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
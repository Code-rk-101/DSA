#include<stdio.h>
int main()
{
    int n,max;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("\nEnter the %d element of array : ",i+1);
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nThe maximun no of array is : %d",max);
return 0;
}
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
    sum=sum+arr[i];
    }
    printf("\nSum of array is = %d",sum);
    int multiply=1;
    for(int i=0;i<n;i++)
    {
    multiply=multiply*arr[i];
    }
    printf("\nMultip;ication of array is = %d",multiply);
return 0;
}
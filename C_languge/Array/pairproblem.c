#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the value x : ");
    scanf("%d",&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d elements of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    int count=0,pair;
    for (int i=0;i<n;i++)
    {
        pair=x-arr[i];
        for(int j=0;j<n;j++)
        {
            if(pair==arr[j] && i!=j)
            {
                count = (count+1);

            }
        } 
    }
    count=count/2;
    printf("The no of pairs of elements equal to %d is : %d",x,count);
    return 0;
}
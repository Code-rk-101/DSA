#include<stdio.h>
int main()
{
    int n,o;
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
    printf("\nEnter the no to search : ");
    scanf("%d",&o);
    for(int i=0;i<n;i++)
    {
        if(o==arr[i])
        {
            printf("%d is found .\nAnd index is %d",o,i);
        }
    }
return 0;
}
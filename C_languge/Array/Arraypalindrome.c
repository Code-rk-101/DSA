#include<stdio.h>
void reversearray(int arr[],int n)
{
    int i=0;
    int j =n-1;
    //swap two elements of array
    while(i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return ;
}
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
    reversearray(arr,n);
    printf("\nThe reverse of array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
             printf("\nThis array is a n0t palindrome.");
             break;
        }
        else
        {
            o++;
        }
    }
    if(o=n)
    {
        printf("\nThis array is a palindrome.");
    }
return 0;
}
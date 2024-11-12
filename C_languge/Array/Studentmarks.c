#include<stdio.h>
int main ()
{
     int n;
    printf("Enter the no of student : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the marks of student are : \n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<35)
        {
            printf("Student of roll no [%d] with marks less than 35 \n",i);
        }
    }
    return 0;
}
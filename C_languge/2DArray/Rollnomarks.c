#include<stdio.h>
int main()
{   int a,b;
    printf("Enter the  no of students : ");
    scanf("%d",&a);
    printf("\nEnter the  type of data : ");
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(i<a&&j==0)
            printf("Enter the roll no of student %d : ",i+1);
            else
            printf("Enter the marks of student %d : ",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("| %d |",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}
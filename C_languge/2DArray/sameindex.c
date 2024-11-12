#include<stdio.h>
int main()
{   int a,b,v;
    printf("Enter the  no of rows : ");
    scanf("%d",&a);
    printf("\nEnter the  no of columns : ");
    scanf("%d",&b);
    int arr[a][b];

    printf("Enter the value at all indices : ");
    scanf("%d",&v);

    //int arr[2][2]={{1,2},{3,4}};//method 1
    
    //method 2
    // arr[0][0]=1 ;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            arr[i][j]=v;
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
#include<stdio.h>
int main()
{   int a,b;
    printf("Enter the  no of rows : ");
    scanf("%d",&a);
    printf("\nEnter the  no of columns : ");
    scanf("%d",&b);
    int arr[a][b];

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter the element of row %d and column %d : ",i+1,j+1);
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

    int check=0,sum=0,R=0;
    for(int i=0;i<a;i++)
    {
        sum=0;
        for(int j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
            
        }
        
        if(check<sum)
        {
            check=sum;
            R=i;
        }
        // if(check==sum)
        // {
        //     printf("The sum of %d row is %d\n",i,sum);

        // }
        
    }
    printf("The sum of row %d is maximum and value is %d\n",R+1,sum);
    return 0;
}
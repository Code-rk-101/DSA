#include<iostream>
using namespace std;

int main()
{
    int r,c,sum,check=0,index;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"Enter the no of col: ";
    cin>>c;
    int arr[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"Enter the value of element of row "<<i<<" col "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<c;i++)
    {
        sum=0; 
        for(int j=0;j<r;j++)
        {
           sum=sum+arr[i][j];
        }
        if(check<sum)
        {
            check=sum;
            index=i;
        }
    }
    cout<<"The row of maximum sum is : "<<index<<" and sum is "<<check;
return 0;
}
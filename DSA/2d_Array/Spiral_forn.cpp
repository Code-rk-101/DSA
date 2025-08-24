#include<iostream>
using namespace std;

int main()
{
     int r,c,sum=0;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"Enter the no of col: ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter the value of element of row "<<i<<" col "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int top=0,bottom=r-1,left=0,right=c-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
}
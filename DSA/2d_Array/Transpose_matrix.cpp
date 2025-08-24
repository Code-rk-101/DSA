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
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
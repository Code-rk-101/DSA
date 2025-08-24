#include<iostream>
using namespace std;

int main()
{
     int r,c,sum=0;
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
    if(r==c)
    {
        cout<<"The sum of first diagonal is : ";
        for(int i=0;i<r;i++)
        {
            sum+=arr[i][i];
        }
        cout<<sum<<endl;
        sum=0;
        cout<<"The sum of second diagonal is : ";
        int s=0,e=r-1;
        for(int i=0;i<r;i++)
        {
            sum+=arr[s][e];
            s++;
            e--;
        }
        cout<<sum<<endl;
    }
    else
    {
        cout<<"Diagonal sum is not possible beacuse number of rows and column are not equal ";
    }
    
}

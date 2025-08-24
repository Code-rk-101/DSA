#include<iostream>
using namespace std;

int main ()
{
    int n,j;
    cout<<"Enter the size of array : \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<"th element in array: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"|"<<arr[i]<<"|";
    }
    j=n-1;
    for(int i=0;i<n;i++)
    {
       swap(arr[i],arr[j]);
        j--;
        if(j<=i)
        {
            break;
        }
    }
    cout<<"\nThe reverse of array is :\n ";
    for(int i=0;i<n;i++)
    {
        cout<<"|"<<arr[i]<<"|";
    }
}
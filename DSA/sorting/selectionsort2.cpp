#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<< i+1<<" elements of array :";
        cin>>arr[i];
    }
    cout<<"The unsorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        int index=n-i-1;
        for(int j=0;j<n-i;j++)
        {
            if(arr[index]<arr[j])
                index=j;
        }
        int rev=n-1-i;
        swap(arr[rev],arr[index]);
        // int swap=0;
        // swap=arr[rev];
        // arr[rev]=arr[index];
        // arr[index]=swap;
    }
    cout<<endl<<"The sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
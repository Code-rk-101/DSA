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
    int max1=INT16_MIN,max2=0;
    for(int i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"|"<<arr[i]<<"|";
    }
    cout<<"\nThe second maximum is "<<max2;
}
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
    for(int i=n-2;i>=0;i--)
    {
        int swaped=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=1;
            }
        }
        if(swaped==0)
            break;
        
    }
    cout<<endl<<"The sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int key,start,end,mid;
    start=0;
    end=n-1;
    bool b=0;
    while(1)
    {
        cout<<endl<<"Enter the element to search : ";
        cin>>key;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(arr[mid]==key)
            {
                b=1;
                break;
            }
            else if(arr[mid]<key)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        if(b=1)
            cout<<endl<<"Element "<<arr[mid]<<" founded at index : "<<mid;
        else
            cout<<endl<<"Element "<<arr[mid]<<"  is not founded in array : ";
        
        exit(1);
    }
return 0;
}
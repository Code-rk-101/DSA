#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid]==key)
        {
            return 1;
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
return 0;
}
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
    int key,check=0,miss,check2=0;
    cout<<endl<<"Enter the place of missing no : ";
    cin>>check2;
    key=arr[0];
    while(check<=check2)
    {
        
        miss=binary_search(arr,n,key);
        if(miss==0)
        {
            cout<<key<<" ";
            check++;
        }
        key++;
    }
    cout<<"These are the missing numbers ";
return 0;
}
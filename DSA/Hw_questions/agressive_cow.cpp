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
        cout<<"Enter the "<< i+1<<" distance of cows in array :";
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

    int start,end,mid,k,count,pos,ans;
    start=arr[0];
    end=arr[n-1]-arr[0];
    cout<<endl<<"Enter the no of cow to be placed : ";
    cin>>k;

    while(start<=end)
    {
        count=1;
        pos=arr[0];
        mid=start+(end-start)/2;
        for(int i=0;i<n;i++)
        {
            if(pos+mid<=arr[i])
            {
                count++;
                pos=arr[i];
            }
        }
        if(count<k)
        {
            end=mid-1;
        }
        else
        {
            ans=mid;
            start=mid+1;
        }
    }
    cout<<"The minimum distance between cows are : "<<ans;
return 0;
}

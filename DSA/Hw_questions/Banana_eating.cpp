#include<iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the no of bananas in "<< i+1<<" pile :";
        cin>>arr[i];
    }
    cout<<"The unsorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // for(int i=n-2;i>=0;i--)
    // {
    //     int swaped=0;
    //     for(int j=0;j<=i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //             swaped=1;
    //         }
    //     }
    //     if(swaped==0)
    //         break;
        
    // }
    // cout<<endl<<"The sorted array is :";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int k;
    cout<<endl<<"Enter the time in which banana to be eaten : ";
    cin>>k;
    int start,end,mid,count,pos,ans=0;
    end=*std::max_element(arr, arr +n);
    start=(accumulate(arr, arr + n, 0))/k;
    if(start==0)
        start=1;
    while(start<=end)
    {
        int total_time=0;
        mid=start+(end-start)/2;
        for(int i=0;i<n;i++)
        {
            total_time+=arr[i]/mid;
            if(arr[i]%mid>0)
            {
                total_time++;
            }
        }
        if(total_time>k)
        {
            start=mid+1;
        }
        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    cout<<"The minimum time taken to eat all bananas are : "<<ans;
return 0;
}

#include<iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<< i+1<<" elements of array :";
        cin>>arr[i];
    }
    cout<<"Enter the no of students : ";
    cin>>m;
    cout<<"The given array no of pages are :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int start,end,mid,ans;
    start=*std::max_element(arr, arr +n);
    end=std::accumulate(arr, arr + n, 0);
     
    while(start<=end)
    {
        int page=0,count=1;
        mid=(start+end)/2;
        for(int i=0;i<n;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];
            }
        }
       
        if(count<=m)
        {
            end=mid-1;
            ans=mid;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<endl<<"The minimum no of pages given to each students are : "<<ans;
}
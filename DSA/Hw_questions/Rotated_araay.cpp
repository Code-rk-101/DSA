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

    int r=0,j=0;
    //rotation of array
    cout<<endl<<"Enter the no of rotation : ";
    cin>>r;
    while(j<r)
    {
        int rotate=arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            arr[n-1-i]=arr[n-2-i];
        }
        arr[0]=rotate;
        j++;
    }
    cout<<endl<<"The rotated array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //finding minimum
    int start,end,mid,ans=arr[0];
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid = end+(start-end)/2;
        if(arr[mid]>arr[0])
        {
            start=mid+1;
        }
        else
        {
            ans=arr[mid];
            end=mid-1;
        }
    }
        cout<<endl<<"The minimum no in this array is : "<<ans;
return 0;
}
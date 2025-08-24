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
    cout<<"The rotated array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //finding minimum
    int start,end,mid,ans=-1,target;
    start=0;
    end=n-1;
    cout<<endl<<"Enter the no to find : ";
    cin>>target;
    while(start<=end)
    {
        mid = end+(start-end)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[0])
        {
            if(arr[start]<=target&&target<=arr[mid])
                end=mid-1;
            else 
                start=mid+1;
        } 
        else
        {
            if(arr[mid]>=target&& target>=arr[end])
                start=mid+1;
            else 
                end=mid-1;
            
        }
    }
    if(ans>-1)
        cout<<"The index of target is "<<ans;
    else
        cout<<"Element is not in the array.";
return 0;
}
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
    int key,start,end,mid,ans=n;
    start=0;
    end=n-1;
    bool b=0;
        cout<<endl<<"Enter the place of missing no to search : ";
        cin>>key;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(arr[mid]-mid-1>=key)
            {
               end=mid-1;
               ans=mid;
            }
            else
            {
                start=mid+1;
            }
        }
        cout<<key<<" th no of missing term is : "<<ans+key;
return 0;
}
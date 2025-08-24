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
    int start,end,mid;
    start=0;
    end=n-1;
        while(start<=end)
        {
            mid = end+(start-end)/2;
            if ((arr[mid] >arr[mid - 1]) && (arr[mid]>arr[mid + 1]))
             { 
                cout<<"The index of higest peak is "<<mid<<" and the higest no is "<<arr[mid];
                break;
             }
            else if(arr[mid]>arr[mid-1])
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
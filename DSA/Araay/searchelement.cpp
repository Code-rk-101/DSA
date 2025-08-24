#include<iostream>
using namespace std;
int main ()
{
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<< i+1<<" elements of array :";
        cin>>arr[i];
    }
    cout<<"Enter the no to find: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            cout<<i;
            break;
        }
        if(i==n-1)
        {
            cout<<"The targete element is not in the array: ";
            break;
        }
    }
}
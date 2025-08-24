#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements : ";
        cin>>v[i];
    }
    cout<<"The unsorted array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    sort(v.begin(),v.end());
    cout<<endl<<"The sorted array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    int start=0,end=1,ans=0,target=0;
    cout<<endl<<"Enter the target to find : ";
    cin>>target;
    while(end<n)
    {
        if(v[end]-v[start]==target)
        {
            cout<<endl<<"The difference of "<<v[end]<<" and "<<v[start]<<" is equal to "<<target;
            break;
        }
        else if(v[end]-v[start]>target)
        {
            start++;
        }
        else
        {
            end++;
        }
        if(start==end)
            end++;
    }
    return 0;
}
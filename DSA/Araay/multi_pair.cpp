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

    int start=0,end=n-1,ans=0,target=0;
    cout<<endl<<"Enter the target to find : ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(v[start]*v[end]==target)
        {
            cout<<"The Multiply of no "<<v[start]<<" and "<<v[end]<<" is equal to the "<<target;
            break;
        }
        else if(v[start]*v[end]>target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,count1=0,index=0,water=0;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> v(n);
    int lrr[n];
    int rrr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements : ";
        cin>>v[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>count1)
        {
            count1=v[i];
            index=i;
        }
    }
    cout<<endl<<count1;
    int maxleft=0;
    for(int i=0;i<index;i++)
    {
        if(min(maxleft,count1)-v[i]>0)
        {
            water+=min(maxleft,count1)-v[i];
        }
        else
            maxleft=v[i];
    }
    cout<<endl<<water;
    int maxright=0;
    for(int i=n-1;i>index;i--)
    {
        if(min(maxright,count1)-v[i]>0)
        {
            water+=min(maxright,count1)-v[i];
        }
        else
            maxright=v[i];
    }
    cout<<endl<<water;
return 0; 
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
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
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        lrr[i]=count1;
        if(v[i]>count1)
        {
            count1=v[i];
        }
        cout<<lrr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--)
    { 
        rrr[i]=count2;
        if(v[i]>count2)
        {
            count2=v[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<rrr[i]<<" ";
    }
    cout<<endl;
    int water=0;
    for(int i=0;i<n;i++)
    {
        if(min(lrr[i],rrr[i])-v[i]>0)
            water+=min(lrr[i],rrr[i])-v[i];

    }
   cout<<water;
return 0;
}
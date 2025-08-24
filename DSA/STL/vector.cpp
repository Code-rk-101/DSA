#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size ";
    cin>>n;
    vector<int>v (n);
    vector<int>v1(5);

    cout<<endl<<"input for v"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<endl<<"input for v1"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cin>>v1[i];
    }
    cout<<endl<<"result "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"result "<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    sort(v.begin(),v.end(),greater<int>());
    sort(v1.begin(),v1.end());
    cout<<endl<<"result "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"result "<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
} 

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
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    int prifix=0,total_sum=0,show=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=v[i];
    }
    for(int i=0;i<n;i++)
    {
        prifix +=v[i];
        if(prifix==(total_sum-prifix))
        {
            cout<<endl<<"the array should be split in two parts at "<<i;
            show=i;
            break;
        }
    }
    cout<<endl<<"The splited array is : ";
    cout<<endl<<"The first part is : ";
    for(int i=0;i<=show;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"The ssecond part is : ";
    for(int i=show+1;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
return 0;
}
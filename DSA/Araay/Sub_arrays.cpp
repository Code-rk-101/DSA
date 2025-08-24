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

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n/i;j++)
        {
            vector<vector<int>> arrays(n);
        }
        for(int k=0;k<n;k++)
        {
            
        }

    }


return 0;
}
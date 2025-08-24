#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the zeros and ones : ";
        cin>>v[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    int start=0,end=n-1;
    int count=0;
    while(start<end)
    {
        if(v[start]==0)
        {
            start++;
            count++;
        }
        else
        {
            if(v[end]==0)
            {
                swap(v[start],v[end]);
                start++,end--;
                count++;
            }
            else
            {
                end--;
            }
        }
    }
    cout<<endl<<"The no of zeros are "<<count;
    cout<<endl<<"The no of ones are "<<n-count;
return 0;
    
} 

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the no of elements in one row : ";
    cin>>m;
    cout<<"Enter the last no : ";
    cin>>n;

    int p=n/m;
    int q=((n%m)/m)+1;
    if(n%m>0)
    {
        p = p+q;
    }
    
    for(int i=0;i<p;i++)
    {
        for(int j=1+m*i;j<=m+m*i && j<=n;j++)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}
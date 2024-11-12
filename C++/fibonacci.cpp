#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,n;
    cout<<"Enter the term of fibonacci series : ";
    cin>>n;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
    return 0;
}
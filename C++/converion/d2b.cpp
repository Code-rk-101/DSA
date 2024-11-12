#include<iostream>
using namespace std;

int main()
{
    int n,b;
    cout<<"Enter the decimal : ";
    cin>>n;

    cout<<"Enter the binary : ";
    cin>>b;

    //decimal to binary

    int mul=1;
    int ans=0;
    int rem=0;
    while(n>0)
    {
        rem = n%2;
        n=n/2;
        ans=rem*mul + ans;
        mul=mul*10;
    }
    cout<<ans<<endl;

    //binary to decimal
    mul=1;
    ans=0;
    rem=0;
    while(b>0)
    {
        rem=b%10;
        b=b/10;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout<<ans<<endl;
}
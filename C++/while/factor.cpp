#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no : ";
    cin>>n;

    int i=1;
    cout<<"The foctors of "<<n<<" are : ";
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<endl<<i;
        }
        i++;
    }
}
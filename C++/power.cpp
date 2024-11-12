#include<iostream>
using namespace std;

int main()
{
    int power,n;
    cout<<"Enter the no : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>power;

    for(int i=0;i<=power-2;i++)
    {
        n=n*n;
    }
    cout<<"The value is :"<<n;
    return 0;
}
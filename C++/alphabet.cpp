#include<iostream>
using namespace std;

int main()
{
    char name;
    int n=0;
    
    for(name='a';name<='z';name=name+1)
    {
        cout<<name<<" ";
        n=n+1;
         if(n%5==0)
        {
        cout<<endl;
        }
    }
   
}
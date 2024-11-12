#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of lines : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(char row='A';row<='A'+n-1;row++)
        {
            cout<<row<<" ";
            
        }
        cout<<endl;
    }
     cout<<endl;
    for(char row='A';row<='A'+n-1;row++)
        {
            for(int i=0;i<n;i++)
            {
                cout<<row<<" ";
            }
            cout<<endl;
        }
}
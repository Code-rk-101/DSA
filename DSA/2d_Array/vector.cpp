#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int r,c;
    cout<<"Enter the no of rows and column : ";
    cin>>r>>c;
    vector<vector<int> >matrix(r,vector<int>(c,1));

    cout<<"row "<<matrix.size()<<endl;
    cout<<"col "<<matrix[0].size();

} 

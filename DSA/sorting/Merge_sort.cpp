#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&data,int start,int end ,int mid,int* count)
{
    int index=0,i=0,left=start,right=mid+1;
    vector<int>temp(end-start+1);
    while(left<=mid && right<=end)
    {
        if(data[left]<=data[right])
        {
            temp[index]=data[left];
            left++,index++;
        }
        else
        {
            temp[index]=data[right];
            index++,right++;
        }
    }
    while(left<=mid)
    {
        temp[index]=data[left];
        index++,left++;
    }
    while(right<=end)
    {
        temp[index]=data[right];
        index++,right++;
    }
    while(start<=end)
    {
        (*count)++;
        data[start]=temp[i];
        start++,i++;
    }
    return;
}
void mergesort(vector<int>&data,int start,int end,int* count)
{
    if(start==end)
        return ;
    
    int mid = start + (end-start)/2;
    mergesort(data,start,mid,count);
    mergesort(data, mid + 1, end,count);
    merge(data,start,end,mid,count);
    return ;
}
int main()
{
    int n,i=0,start=0,end=0 ,count=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> data(n);
    cout<<"Enter the data in array : "<<endl;
    while(n)
    {
        cin>>data[i];
        i++,n--;
    }
    
    int j = 0;
    while(j<data.size())
    {
        cout<<data[j]<<" ";
        j++;
    }

    end=i-1;
    mergesort(data,start,end,&count);
    
    cout<<endl<<"The sorted array is : ";
    j=0;
    while(j<data.size())
    {
        cout<<data[j]<<" ";
        j++;
    }
    cout<<endl<<count;
    return 0;
}
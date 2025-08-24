#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node  *next;
} ;

node *create_link_list(int arr[],int n,int index)
{
    if(index==n)
    {
        return NULL;
    }

    node *temp=new node;
    temp->data=arr[index];
    temp->next=create_link_list(arr,n,index+1);

    return temp;
}
void print_list(node *temp)
{
    //node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int target,choice=1,position=0;
    node *head;
    //link list created 
    head=create_link_list(arr,10,0);
    while(choice)
    {
        cout<<"The given link list is : ";
        print_list(head);

        //enter at position
        cout<<"Enter the position to insert : ";
        cin>>position;
        cout<<"Enter the data to insert : ";
        cin>>target;
        position--;
        node *temp2=head;
        while(position)
        {
            temp2=temp2->next;
            position--;
        }
        node *temp=new node;
        temp->data=target;
        temp->next=temp2->next;
        temp2->next=temp;
        print_list(head);

        cout<<endl<<"To continue press 1 else 0 : ";
        cin>>choice;
    }
    return 0;
}

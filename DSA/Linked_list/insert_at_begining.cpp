#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
int main()
{
    int choice=1;
    node *head;
    head=NULL;
    
    while(choice)
    {
        int n;
        cout<<"Enter the data to enter in linked list : ";
        cin>>n;

        if(head==NULL)
        {
            head= new node;
            head->data=n;
            head->next=NULL;
        }
        else
        {
            node *temp;
            temp=new node;
            temp->data=n;
            temp->next=head;
            head=temp;
        }
        cout<<"Enter 1 to continue and 0 to end : ";
        cin>>choice;
    }
    node *temp;
    temp=head;
    while(temp)
    {
        int p = temp->data;
        cout<<p<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
    
    return 0;
}
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};
int main()
{
    int choice,n;
    choice=1;
    node *head=NULL;
    node *tail=NULL;
    while(choice)
    {
        cout<<"Enter the data in linked list : ";
        cin>>n;
        if(head==NULL)
        {
            head = new node;
            head->data=n;
            head->next=NULL;
            tail=head;
            cout<<"*";
        }
        else
        {
            tail->next=new node;
            tail=tail->next;
            tail->data=n;
            tail->next=NULL;
            cout<<"**";

        }
        cout<<"To continue press 1 or to stop press 0 : ";
        cin>>choice;
    }
    node *temp;
    temp=head;
    while(temp)
    {
        int p= temp->data;
        cout<<p<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";

    return 0;
}
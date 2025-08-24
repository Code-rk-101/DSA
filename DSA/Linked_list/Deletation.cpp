#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};
node *create_link_list(int arr[],int n,int index)
{
    if(index==n)
    {
        
        return NULL;
    }
    node *temp=new node;
    temp->data=arr[index];
    temp->next=create_link_list(arr,10,index+1);
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
    node *head,*tail,*temp;
    head=create_link_list(arr,10,0);
    temp=head;
    while(temp)
    {
        tail=temp;
        temp=temp->next;
    }
    print_list(head);
    // Delete at begining 

    int choice;
    cout<<"Enter 1 to delete at begining ";
    cin>>choice;
    while(choice)
    {
        if(head==NULL)
        {
            cout<<"List is empty. "<<endl;
            break;
        }
        else
        {
            temp=head;
            head=temp->next;
            delete temp;
        }
        print_list(head);
        cout<<"Enter 1 to delete at begining : ";
        cin>>choice;
    }

    //Delete at end
    cout<<"Enter 1 to delete at end ";
    cin>>choice;
    while(choice)
    {
        if(head==NULL)
        {
            cout<<"List is empty. "<<endl;
            break;
        }
        else if(head->next==NULL)
        {
            delete tail;
            tail=NULL;
            head=NULL;
            cout<<"List is empty. "<<endl;
        }
        else
        {
            node *temp;
            temp=head;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
        print_list(head);
        cout<<"Enter 1 to delete at end : ";
        cin>>choice;
    }

    //Delete at position 
    int pos;
    choice=1;
    while (choice)
    {
        cout<<"Enter the pos to delete : ";
        cin>>pos;
        pos--;

        node* temp2=NULL;
        temp=head;
        if(head==NULL)
        {
            cout<<"List is empty. "<<endl;
            break;
        }
        if(pos==0)
        {
            head=temp->next;
            delete temp;
        }
        else
        {
             while (pos)
            {
                temp2=temp;
                temp=temp->next;
                pos--;
            }
            temp2->next=temp->next;
            delete temp;
        }
        print_list(head);
        cout<<"Enter 1 to delete at position : ";
        cin>>choice;
    }
    return 0;
}
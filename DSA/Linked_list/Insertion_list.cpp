#include<iostream>
using namespace std ;
class node
{
    public:
    int data;
    node *next;
};

void insert_at_begining(node **tail,node **head,int n)
{
    if(*head==NULL)
    {
        node *temp=new node;
        temp->data=n;
        temp->next=NULL;
        *head=temp;
        *tail=temp;
    }
    else
    {
        node *temp=new node;
        temp->data=n;
        temp->next=*head;
        *head=temp;
    }
    return ;
}

void insert_at_end(node **head,node **tail,int n)
{
    if(*tail==NULL)
    {
        node *temp=new node;
        temp->data = n;
        temp->next = NULL;
        *tail=temp;
        *head=temp;
        cout<<"#1"<<endl;
    }
    else
    {
        node *temp1;
        node *temp=new node;
        temp->data = n;
        temp->next = NULL;
        temp1=*tail;
        temp1->next=temp;
        *tail=temp;
    }
    return ;
}

void insert_at_positioin(node **head,int n,int pos)
{
    if(*head==NULL)
    {
        cout<<"Create the link list first .";
        return ;
    }
    else
    {
        node *temp1=*head;
        while(pos)
        {
            temp1=temp1->next;
            pos--;
        }
        node *temp=new node;
        temp->data = n;
        temp->next=temp1->next;
        temp1->next=temp;
    }
    return ;
}
void delete_at_begining(node **head)
{
    if(*head==NULL)
    {
        cout<<"List is empty.";
        return ;
    }
    else
    {
        node *temp=*head;
        *head=temp->next;
        delete temp;
    }
    return ;
}
void delete_at_end(node **head,node **tail)
{
    node *temp=*head;
    if(*tail==NULL)
    {
        cout<<"List is empty.";
        return ;
    }
    else if(temp->next==NULL)
    {
        delete temp;
        *head=NULL;
        *tail=NULL;
    }
    else
    {
        while(temp->next!=*tail) 
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete *tail;
        *tail=temp;
    }
    return ;
}
void delete_at_position(node **head,int pos)
{
    int n=0;
    pos--;
    node *temp2=*head;
    while(temp2)
    {
        n++;
        temp2=temp2->next;
    }
    if(pos>=n)
    {
        cout<<"Position is out of bound .";
        return ;
    }
    else if(pos<0)
    {
        cout<<"Position is out of bound .";
        return;
    }
    else if(*head==NULL)
    {
        cout<<"List is empty.";
        return ;
    }
    else if(pos==0)
    {
        delete_at_begining(head);
        return ;
    }
    else
    {
        node *temp=*head;
        node *temp1=NULL;
        while(pos)
        {
            temp1=temp;
            temp=temp->next;
            pos--;
        }
        temp1->next=temp->next;
        delete temp;
        return;
    }
}
void reverse_list(node **head)
{
    node *temp=*head;
    if(temp==NULL || temp->next==NULL)
    {
        cout<<temp;
        return ;
    }
    node *pre,*fut;
    pre=NULL;
    while(temp!=NULL)
    {
        fut=temp->next;
        temp->next=pre;
        pre=temp;
        temp=fut;
    }
    *head=pre;
    return ;
}
void print_list(node *temp)
{
    while (temp)
    {
        cout<<temp->data<<" -> ";;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return ;
}
int main()
{
    int choice,repeat=1;
    node *head=NULL;
    node *tail=NULL;

    
    while(1)
    {
        cout<<endl;
        cout<<"1.Insert at begining"<<endl;
        cout<<"2.Insert at end"<<endl;
        cout<<"3.Insert at position"<<endl;
        cout<<"4.delete at begining"<<endl;
        cout<<"5.delete at end"<<endl;
        cout<<"6.delete at position"<<endl;
        cout<<"7.Reverse the list"<<endl;
        cout<<"8.Exit"<<endl;

        cout<<"Enter the choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 : //Insert at begining 
            {
                int data;
                cout<<"Enter the data to insert : ";
                cin>>data;
                insert_at_begining(&tail,&head,data);
                cout<<endl;
                print_list(head);
                break;
            } 
            case 2:
            {
                int data;
                cout<<"Enter the data to insert : ";
                cin>>data;
                insert_at_end(&head,&tail,data);
                cout<<endl;
                print_list(head);
                break;
            }
            case 3:
            {
                int data,position;
                cout<<"Enter the data to insert : ";
                cin>>data;
                cout<<"Enter the positon to insert : ";
                cin>>position;
                insert_at_positioin(&head,data,position-1);
                cout<<endl;
                print_list(head);
                break;

            }
            case 4:
            {
                delete_at_begining(&head);
                cout<<endl;
                print_list(head);
                break;
            }
            case 5:
            {
                delete_at_end(&head,&tail);
                cout<<endl;
                print_list(head);
                break;
            }
            case 6:
            {
                int position;
                cout<<"Enter the position to delete : ";
                cin>>position;
                delete_at_position(&head,position);
                cout<<endl;
                print_list(head);
                break;
            }
            case 7:
            {
                cout<<"The reverse list is : ";
                reverse_list(&head);
                print_list(head);
            }
            case 8:
            {
                exit(0);
            }
            default : 
            {
                cout<<"Enter a valid choice ."<<endl;
                break;
            }
        }
    }
    return 0;

}
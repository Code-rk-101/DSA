#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* pre;
    node* next;

    node()
    {
        data=0;
        next=NULL;
        pre=NULL;
    }
};
void insert_at_begining(node **p1,node **p2,int data1,int *size)
{
    node *head=*p1; 
    node *tail=*p2; 
    node *temp=new node;

    if(head==NULL)
    {
        temp->data=data1;
        *p1=*p2=temp;
        (*size)++;
        return;
    }
    temp->data=data1;
    temp->next=head;
    *p1=temp;
    (*size)++;
    return;
    
}
void insert_at_end(node **p1,node** p2,int data1,int *size)
{
    node *head=*p1; 
    node *tail=*p2; 
    node *temp=new node;

    if(tail==NULL)
    {
        temp->data=data1;
        *p1=*p2=temp;
        (*size)++;
        return;
    }
    temp->data=data1;
    temp->pre=tail;
    tail->next=temp;
    *p2=temp;
    (*size)++;
    return;
}
void insert_at_position(node** p1,node** p2,int data1,int pos,int *size)
{
    node *head=*p1; 
    node *tail=*p2; 
    node *temp=new node;
    node *curr=head;
    //int size1=*size;


    if(head==NULL)
    {
        if(pos==1)
        {
            insert_at_begining(p1,p2,data1,size);
            return;
        }
        else
        {
            cout<<"List is empty and Position out of bound."<<endl;
            return;
        }
    }
    if(pos==1)
    {
        insert_at_begining(p1,p2,data1,size);
        return;
    }
    if(pos==*size)
    {
        insert_at_end(p1,p2,data1,size);
        return;
    }
    if(pos>*size || pos<0)
    {
        cout<<"Position out of bound."<<endl;
        return;
    }
    while(--pos)
    {
        curr=curr->next;
    }
    temp->data=data1;
    temp->next=curr->next;
    temp->pre=curr;
    curr->next=temp;
    temp->next->pre=temp;
    (*size)++;
    return;
}
void print_list(node *temp)
{
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    return;
}
int main ()
{
    int choice,data,pos,size=0;
    node* head=NULL;
    node* tail=NULL;
    while(1)
    {
        cout<<endl<<"Choose one of the following :"<<endl;
        cout<<"1.Insert at begining."<<endl;
        cout<<"2.Insert at end."<<endl;
        cout<<"3.Insert at position."<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
    
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter the data to insert : ";
                cin>>data;
                insert_at_begining(&head,&tail,data,&size);
                print_list(head);
                break;
            }
            case 2:
            {
                cout<<"Enter the data to insert : ";
                cin>>data;
                insert_at_end(&head,&tail,data,&size);
                print_list(head);
                break;
            }
            case 3: 
            {
                cout<<"Enter the data to insert : ";
                cin>>data;
                cout<<"Enter position to insert : ";
                cin>>pos;
                insert_at_position(&head,&tail,data,pos,&size);
                print_list(head);
                break;
            }
            case 4:
            {
                exit(0);
            }
            default :
            {
                cout<<"Enter a valid choice.";
                break;
            }
        }
    }
    return 0;
}

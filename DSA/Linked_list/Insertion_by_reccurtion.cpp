#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node  *next;
} ;

node *create_link_list_begining(int arr[],int n,int index,node *temp1)
{
    if(index==n)
    {
        return temp1;
    }

    node *temp=new node;
    temp->data=arr[index];
    temp->next=temp1;
    

    return create_link_list_begining(arr,n,index+1,temp);;
}

node *create_link_list_end(int arr[],int n,int index)
{
    node *temp=new node;
    if(index==n)
    {
        return NULL;
    }
    else
    {
        temp->data=arr[index];
        temp->next=create_link_list_end(arr,10,index+1);
    }
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
    while(1)
    {
        int choice;
        cout<<"Methods to create list : "<<endl; 
        cout<<"1.Insert at begining by reccurtion : "<<endl; 
        cout<<"2.Insert at end by reccurtiont : "<<endl; 
        cout<<"4.Exit"<<endl;
        cout<<"Enter the Method to create list : "<<endl; 
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                cout<<"The link list is : "<<endl;
                head=create_link_list_begining(arr,10,0,NULL);
                print_list(head);
                break;
            }
            case 2:
            {
                cout<<"The link list is : "<<endl;
                head=create_link_list_end(arr,10,0);
                print_list(head);
                break;
            }
            case 3:
            {
                exit(0);
            }
            default :
            {
                cout<<"Enter the valid choice : "<<endl;
                break;
            }
            
        }
    }
    return 0;
}
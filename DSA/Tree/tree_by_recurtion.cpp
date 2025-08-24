#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    node* left;
    node* right;

    node (int x)
    {
        data = x;
        left = right = NULL;
    }

};

node* create_tree()
{
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    node* temp = new node(x);

    cout<<"Enter the value of left child of "<<temp->data<<" :" ;
    temp->left = create_tree();

    cout<<"Enter the value of right child of "<<temp->data<<" :";
    temp->right = create_tree();

    return temp;
}
int main()
{
    cout<<"Enter the root of tree : ";
    node* temp = create_tree();

    return ;
}
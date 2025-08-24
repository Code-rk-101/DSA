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

void preorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

    return;
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    return;
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

    return;
}
int main()
{
    cout<<"Enter the root of tree : ";
    node* root = create_tree();

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);

    return 0;
}
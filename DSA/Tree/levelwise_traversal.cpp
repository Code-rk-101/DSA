#include<iostream>
#include<queue>
using namespace std;

class node
{
public :

    int data;
    node* left;
    node*right;

    node(int x)
    {
        data =x;
        left=NULL;
        right=NULL;
    }
};
node* create_tree()
{
    int r;
    queue<node*> q;
    cout<<"Enter the root value : ";
    cin>>r;
    node*root= new node(r);
    q.push(root);

    while(!q.empty())
    {
        int n;
        node* temp = q.front();
        q.pop();
        //left child
        cout<<"Enter the left child of "<<temp->data<<" : ";
        cin>>n;
        if(n!=-1)
        {
            node*left_child = new node(n);
            temp->left=left_child;
            q.push(left_child);
        }

        //right child
        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>n;
        if(n!=-1)
        {
            node*right_child = new node(n);
            temp->right=right_child;
            q.push(right_child);
        }

    }
    return root;
}

void level_traversal(node* root)
{
    queue<node*> qu;
    cout<<root->data<<" ";
    qu.push(root);

    while(!qu.empty())
    {
        node* temp = qu.front();
        qu.pop();
        if(temp->left!=NULL)
        {
            cout<<temp->left->data<<" ";
            qu.push(temp->left);
        }

        if(temp->right!=NULL)
        {
            cout<<temp->right->data<<" ";
            qu.push(temp->right);
        }
    }
return;
}

int main()
{
    cout<<"Creatiion of binary tree : \n";
    node*root = create_tree();

    level_traversal(root);
    return 0;
}
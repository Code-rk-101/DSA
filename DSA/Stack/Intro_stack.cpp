#include<iostream>
// #include<stack>
using namespace std;

class stack
{
    public:
    int *arr;
    int size;
    int top;


    stack(int n)
    {
        arr=new int[n];
        size=n;
        top=-1;
    }

    void push(int n)
    {
        if(top==size-1)
        {
            cout<<"stack overflow."<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]=n;
        }
        return;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow.";
            return;
        }
        else
        {
            top--;
        }
        return;
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty.";
            return;
        }
        else
        {
            cout<<arr[top];
        }
        return;
    }
    void isempty()
    {
        if(top>-1)
        {
            cout<<"Stack is not empty"<<endl;
            return;
        }
        else
        {
            cout<<"Stack is empty."<<endl;
        }
        return ;
    }
    void issize()
    {
        if(top==-1)
        {
            cout<<"Stack is empty size = 0."<<endl;
            return ;
        }
        else
        {
            cout<<top+1<<endl;
        }
        return;
    }
};

int main()
{
    stack s(5);
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(12);
    s.push(12);
    s.push(12);
    cout<<*s.arr<<endl;
    cout<<*(s.arr+1)<<endl;
    cout<<*(s.arr+2)<<endl;
    cout<<*(s.arr+3)<<endl;
    cout<<*(s.arr+4)<<endl;

    // s.issize();
    // s.isempty();
    // s.pop();
    // s.pop();

    // s.issize();
    // s.isempty();
    // s.pop();
    // s.issize();
    // s.pop();
    return 0;
}
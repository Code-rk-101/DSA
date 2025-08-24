#include<iostream>
using namespace std;

int main()
{
    class node
    {
        public:
        int data;
        node *next;

        //constructor
        node()
        {
            data=0;
            next=NULL;
        }

    };
    class Queue
    {
        public:
        node *front;
        node*rear;
        int size;

        //constructor
        Queue()
        {
            front=NULL;
            rear=NULL;
            size=0;
        }

        //operatioins
        //1.Isempty
        int Isempty()
        {
            if(size==0)
            {
                return 1;
            }
            return 0;
        }
        
        //2.push
        void push(int n)
        {
            if(Isempty())
            {
                front=rear=new node;
                front->data=n;
                size++;
            }
            else
            {
                node *temp=new node;
                if(temp==NULL)
                {
                    cout<<"Queue overflow."<<endl;
                    return ;
                }
                temp->data=n;
                rear->next=temp;
                rear=temp;
                size++;
            }
            return ;
        }
        //3.pop
        void pop()
        {
            if(Isempty())
            {
                cout<<"Queue underflow."<<endl;
                return ;
            }
            else
            {
                node *temp=front;
                front=front->next;
                delete temp;
                size--;
            }
            return ;
        }
        //4.size
        int Issize()
        {
            return size;
        }

        //5.start
        int start()
        {
            if(Isempty())
            {
                cout<<"List is empty."<<endl;
                return -1;
            }
            return front->data;
        }
    };

    Queue a;
    a.push(0);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

    cout<<a.start()<<endl;
    cout<<a.Issize()<<endl;

    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    cout<<a.start()<<endl;
    cout<<a.Issize()<<endl;
}
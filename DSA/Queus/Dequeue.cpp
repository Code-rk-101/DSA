#include<iostream>
using namespace std;

int main()
{
    class node
    {
        public:
        int data;
        node *pre;
        node  *next;

        node()
        {
            data=0;
            pre=next=NULL;
        }
    };

    class Dequeue
    {
        public:
        node *front,*rear;
        int size;

        Dequeue()
        {
            front=rear=NULL;
            size=0;
        }

        bool empty()
        {
            if(front==NULL)
                return 1;
            
            return 0;
        }

        void push_front(int v)
        {
            if(empty())
            {
                front=rear=new node;
                front->data=v;
                size++;
            }
            else
            {
                node *temp = new node;
                temp->data = v;
                temp->next=front;
                front->pre=temp;
                front=temp;
                size++;
            }
            return;
        }

        void push_rear(int v)
        {
            if(empty())
            {
                front=new node;
                rear=front;
                front->data=v;
                size++;
            }
            else
            {
                node *temp=new node;
                temp->data=v;
                temp->pre=rear;
                rear->next=temp;
                rear=temp;
                size++;
            }
            return;
        }

        void pop_front()
        {
            if(empty())
            {
                cout<<"Dqueue is empty 1."<<endl;
                return ;
            }
            else
            {
                node *temp=front;
                front=front->next;
                delete temp;
                if(front==NULL)
                    rear=NULL;
                else
                    front->pre=NULL;
                size--;
            }
            return ;
        }

        void pop_rear()
        {
            if(empty())
            {
                cout<<"Dequeue is empty 2."<<endl;
                return ;
            }
            else
            {
                node *temp=rear;
                rear=rear->pre;
                delete temp;
                if(rear==NULL)
                    front=NULL;
                else
                    rear->next=NULL;
                size--;
            }
            return ;
        }
        int start()
        {
            return front->data;
        }
        int end()
        {
            return rear->data;
        }
        int issize()
        {
            return size;
        }
    };


    Dequeue a;
    a.push_front(5);
    a.push_front(5);
    a.push_front(5);
    a.push_front(5);
    cout<<a.issize()<<endl;
    a.pop_front();
    a.pop_front();
    a.pop_front();
    a.pop_front();
    a.pop_front();
    cout<<a.issize()<<endl;
    a.push_rear(0);
    a.push_rear(01);
    a.push_rear(20);
    a.push_rear(30);
    cout<<a.issize()<<endl;
    cout<<a.end()<<endl;
    a.pop_rear();
    a.pop_rear();
    a.pop_rear();
    
    cout<<a.end()<<endl;
    cout<<a.issize()<<endl;
   
}
#include<iostream>
using namespace std;

int main()
{
     class Queu
    {
        public :
        int *arr;
        int front;
        int rear;
        int size;

        //constructor 
        Queu(int n)
        {
            arr=new int[n];
            front =-1;
            rear=-1;
            size = n;
        }

        //operations


        //1.Isempty
        bool Isempty()
        {
            if(front==-1)
                return 1;
            
            return 0;
        }
        //2.Isfull
        bool Isfull()
        {
            if((rear+1)%size==front)
            {
                return 1;
            }
            return 0;
        }
        // 3.push 
        void push( int v)
        {
            if(Isfull())
            {
                cout<<"Queue overflow."<<endl;
            }
            else if(Isempty())
            {
                front=rear=0;
                arr[0]=v;
            }
            else
            {
                (rear++)%size;
                arr[rear]=v;

            }
            return ;
        }

        //4.pop
        void pop()
        {
            if(Isempty())
            {
                cout<<"Queue underflow"<<endl;
            }
            else if(front==rear)
            {
                (front++)%size;
                cout<<"Queue is empty"<<endl;
                front=rear=-1;
            }
            else
            {
                (front++)%size;
            }
            return;
        }
        //5.Isstart
        int start()
        {
            int s=0;
            if(Isempty())
            {
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else
            {
                s=arr[front];
            }
            return s;
        }

        //6.Issize
        int Issize()
        {
            if(Isempty())
            {
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            
            return size;
        }
    };


    Queu a(5);
    a.push(1);
    a.push(11);
    a.push(12);
    a.push(13);
    a.push(14);
    cout<<a.start()<<endl;
    
    a.pop();
    a.pop();
    cout<<a.start()<<endl;

    a.push(10);
    a.push(20);
    a.push(30);
    cout<<a.start()<<endl;

}
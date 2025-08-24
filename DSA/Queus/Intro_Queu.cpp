#include<iostream>
using namespace std;

int main()
{
    class queu
    {
        public :
        int *arr;
        int front;
        int rear;
        int size;

        //constructor 
        queu(int n)
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
            if(rear==size-1)
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
                rear++;
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
            else if(front>rear)
            {
                cout<<"Queue is empty"<<endl;
                front=rear=-1;
            }
            else
            {
                front++;;
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
            }
            
            return size;
        }
    };

    queu a(5);
    a.push(9);
    a.push(90);
    a.push(99);
    a.push(95);
    a.push(94);
    a.push(94);
    
    cout<<a.start()<<endl;
    
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();

    cout<<a.start()<<endl;

    return 0;
}
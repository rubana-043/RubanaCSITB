#include<iostream>
using namespace std;
#define SIZE 5
class CQUEUE{
    private:
        int items[SIZE], front , rear;
    public:
        CQUEUE()
        {
            front = rear = -1;
        }
        void enqueue(int value)
        {
            if(((rear+1)%SIZE)==front)
            {
                cout<<"QUEUE is full!"<<endl;
                return;
            }
            else
            {
                if(front == -1 &&rear == -1)
                {
                    front = rear = 0;
                    items[rear]= value;
                    cout<<items[rear]<<" is enqueued to the queue."<<endl;
                }
                else
                {
                    rear = (rear+1)%SIZE;
                    items[rear] = value;
                    cout<<items[rear]<<" is enqueued to the queue"<<endl;
                }
            }
        }
        void dequeue()
        {
            if(front == -1)
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            else if(front == rear)
            {
                cout<<items[front]<<" is dequeued from the queue."<<endl;
                front = rear = -1;
            }
            else
            {
                cout<<items[front]<<" is dequeued from the queue."<<endl;
                front = (front + 1)%SIZE;
            }
        }
        void traverse()
        {
            if(front == -1)
            {
                cout<<"Queue is full."<<endl;
                return;
            }
            else
            {   
                cout<<"Queue elements are: ";
                for(int i = front; i!=rear; i = (i+1)%SIZE)
                {
                    cout<<items[i]<<" ";
                }
                cout<<items[rear]<<endl;
            }
        }
};

int main()
{
    CQUEUE q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.traverse();
    q.dequeue();
    q.dequeue();
    q.traverse();
    q.enqueue(60);
    q.enqueue(70);
    q.traverse();
    return 0;
}

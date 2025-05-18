#include <iostream>
using namespace std;
#define SIZE 5 

class Queue {
private:
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is Full (Overflow)!" << endl;
            return;
}
        if (front == -1) front = 0;
        items[++rear] = value;
        cout << value << " enqueued into the queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty (Underflow)!" << endl;
            return;
        }
        cout << items[front] << " dequeued from the queue." << endl;
        front++;
    }

    void traverse() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << items[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q; 
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.traverse(); 

    q.dequeue();
    q.traverse(); 

    q.enqueue(40);
q.enqueue(50);
    q.enqueue(60);
    q.traverse();

    return 0;
}

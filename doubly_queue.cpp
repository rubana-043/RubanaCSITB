#include <iostream>
#define SIZE 5 
using namespace std;

class Deque {
private:
    int arr[SIZE]; 
    int front, rear; 

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    void enqueueFront(int value) {
        if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
            cout << "Deque is Full!" << endl;
            return;
        }
        if (front == -1) { 
            front = rear = 0;
        } else if (front == 0) { 
            front = SIZE - 1;
        } else {
            front--;
        }
        arr[front] = value;
        cout << value << " inserted at the front." << endl;
    }

    void enqueueRear(int value) {
        if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
            cout << "Deque is Full!" << endl;
            return;
        }
        if (rear == -1) { 
            front = rear = 0;
        } else if (rear == SIZE - 1) { 
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        cout << value << " inserted at the rear." << endl;
    }

    void dequeueFront() {
        if (front == -1) {
            cout << "Deque is Empty!" << endl;
            return;
        }
        cout << arr[front] << " removed from the front." << endl;
        if (front == rear) { 
            front = rear = -1;
        } else if (front == SIZE - 1) { 
            front = 0;
        } else {
            front++;
        }
    }

    void dequeueRear() {
        if (rear == -1) {
            cout << "Deque is Empty!" << endl;
            return;
        }
        cout << arr[rear] << " removed from the rear." << endl;
        if (front == rear) { 
            front = rear = -1;
        } else if (rear == 0) { 
            rear = SIZE - 1;
        } else {
            rear--;
        }
    }

    void traverse() {
        if (front == -1) {
            cout << "Deque is Empty!" << endl;
            return;
        }
        cout << "Deque elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    dq.enqueueRear(10);
    dq.enqueueRear(20);
    dq.enqueueFront(5);
    dq.enqueueFront(1);
    dq.enqueueRear(30);
    dq.traverse();
    dq.dequeueFront();
    dq.dequeueRear();
    dq.traverse();
    dq.enqueueFront(40);
    dq.enqueueRear(50);
    dq.traverse();
    return 0;
}

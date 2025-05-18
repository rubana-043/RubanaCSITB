#include <iostream>
using namespace std;

#define MAX 5

class Deque {
private:
    int arr[MAX];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    // Insert at front
    void insertFront(int value) {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
            cout << "Deque is full. Cannot insert at front.\n";
            return;
        }

        if (front == -1) {  // empty deque
            front = rear = 0;
        } else if (front == 0) {
            front = MAX - 1;
        } else {
            front--;
        }

        arr[front] = value;
        cout << value << " inserted at front\n";
    }

    // Insert at rear
    void insertRear(int value) {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
            cout << "Deque is full. Cannot insert at rear.\n";
            return;
        }

        if (front == -1) {  // empty deque
            front = rear = 0;
        } else if (rear == MAX - 1) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = value;
        cout << value << " inserted at rear\n";
    }

    // Delete from front
    void deleteFront() {
        if (front == -1) {
            cout << "Deque is empty. Cannot delete from front.\n";
            return;
        }

        cout << arr[front] << " deleted from front\n";

        if (front == rear) {  // only one element
            front = rear = -1;
        } else if (front == MAX - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    // Delete from rear
    void deleteRear() {
        if (rear == -1) {
            cout << "Deque is empty. Cannot delete from rear.\n";
            return;
        }

        cout << arr[rear] << " deleted from rear\n";

        if (front == rear) {  // only one element
            front = rear = -1;
        } else if (rear == 0) {
            rear = MAX - 1;
        } else {
            rear--;
        }
    }

    // Display the deque
    void display() {
        if (front == -1) {
            cout << "Deque is empty.\n";
            return;
        }

        cout << "Deque elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    int choice, value;

    while (true) {
        cout << "\nDoubly Ended Queue Menu\n";
        cout << "1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert at front: ";
            cin >> value;
            dq.insertFront(value);
            break;
        case 2:
            cout << "Enter value to insert at rear: ";
            cin >> value;
            dq.insertRear(value);
            break;
        case 3:
            dq.deleteFront();
            break;
        case 4:
            dq.deleteRear();
            break;
        case 5:
            dq.display();
            break;
        case 6:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

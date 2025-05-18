#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class CircularLinkedList
{
private:
    Node *rear;

public:
    CircularLinkedList()
    {
        rear = nullptr;
    }
    void insertAtBeginning(int x)
    {
        Node *newNode = new Node();
        newNode->data = x;
        if (rear == nullptr)
        {
            rear = newNode;
            rear->next = rear;
        }
        else
        {
            newNode->next = rear->next;
            rear->next = newNode;
        }
        cout << x << " is inserted at the beginning of the list.\n";
    }
    void insertAtEnd(int x)
    {
        Node *newNode = new Node();
        newNode->data = x;
        if (rear == nullptr)
        {
            rear = newNode;
            rear->next = rear;
        }
        else
        {
            newNode->next = rear->next;
            rear->next = newNode;
            rear = newNode;
        }
        cout << x << " is inserted at the end of the list.\n";
    }
    void deleteFromBeginning()
    {
        if (!rear)
        {
            cout << "List is empty.\n";
            return;
        }
        Node *front = rear->next;
        if (front == rear)
        {
            cout << front->data << " is deleted\n";
            delete front;
            rear = nullptr;
        }
        else
        {
            rear->next = front->next;
            cout << front->data << " is deleted\n";
            delete front;
        }
    }
    void deleteAtEnd()
    {
        if (!rear)
        {
            cout << "List is empty.\n";
            return;
        }
        Node *temp = rear->next;
        if (rear == rear->next) 
        {
            cout << rear->data << " is deleted from the list\n";
            delete rear;
            rear = nullptr;
            return;
        }
        Node *prev = temp;
        while (prev->next != rear)
        {
            prev = prev->next;
        }
        prev->next = rear->next; 
        cout << rear->data << " is deleted from the list\n";
        delete rear;
        rear = prev;
    }
    
    void traverse()
    {
        if (!rear)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = rear->next;
        cout << "Elments in the list are:\n";
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }while (temp != rear->next);
        cout << endl;
    }
};
int main()
{
    CircularLinkedList c;
    c.insertAtBeginning(10);
    c.insertAtEnd(20);
    c.insertAtBeginning(5);
    c.insertAtEnd(30);
    c.traverse();
    c.deleteFromBeginning();
    c.traverse();
    c.deleteAtEnd();
    c.traverse();
    return 0;
}

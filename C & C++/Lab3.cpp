#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, capacity;
    int* array;

public:
    Queue(int size) {
        capacity = size;
        front = rear = -1;
        array = new int[size];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        if (isEmpty())
            front = 0;
        rear = (rear + 1) % capacity;
        array[rear] = item;
        cout << item << " enqueued to the queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        int item = array[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % capacity;
        cout << item << " dequeued from the queue.\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (i != rear) {
            cout << array[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << array[rear] << endl;
    }

    ~Queue() {
        delete[] array;
    }
};

int main() {
    int size, choice, item;
    cout << "Enter the size of the queue: ";
    cin >> size;
    Queue q(size);

    while (true) {
        cout << "Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item to enqueue: ";
                cin >> item;
                q.enqueue(item);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid choice.\n";
        }
    }

    return 0;
}

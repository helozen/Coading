#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

typedef Node *NodePtr;

class LinkedList
{
private:
    NodePtr head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        NodePtr newNode = new Node(value);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            NodePtr current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void traverse()
    {
        NodePtr current = head;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    bool search(int target)
    {
        NodePtr current = head;
        while (current)
        {
            if (current->data == target)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    LinkedList list;

    cout << "Enter " << n << " numbers for the linked list:\n";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        list.insert(value);
    }

    cout << "Linked List: ";
    list.traverse();

    int target;
    cout << "Enter a number to search for: ";
    cin >> target;

    if (list.search(target))
    {
        cout << "The number " << target << " is present in the linked list." << endl;
    }
    else
    {
        cout << "The number " << target << " is not present in the linked list." << endl;
        cout << endl;
        cout << endl;
    }

    return 0;
}

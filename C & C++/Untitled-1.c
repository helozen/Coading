#include <stdio.h>

int front = -1;
int rear = -1;
int max = 5;
int queue[50];

void enque()
{
    int x;
    if (rear == max - 1)
    {
        printf("Overflow");
    }
    else if (front == -1 && rear == -1)
    {
        printf("Element to be inserted in the Queue\n:");
        scanf("%d", &x);
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        printf("Element to be inserted in the queue\n:");
        scanf("%d", &x);
        rear++;
        queue[rear] = x;
        printf("\nThe rear value: %d", rear);
    }
}

void deque()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Deleted %d", queue[front]);
        front++;
        printf("\n The front value: %d", front);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Empty Queue\n");
    }
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d \t", queue[i]);
            printf("\n");
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n 1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter you choice of operation : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }
}
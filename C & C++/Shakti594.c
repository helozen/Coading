#include <stdio.h>
#include <stdlib.h>

int front = -1;
int rear = -1;
int queue[50];
int max = 5;

void enque()
{
    int x;
    if (rear == max - 1)
    {
        printf("Queue Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        printf("\nInsert the element in queue: ");
        scanf("%d", &x);
        front == rear == 0;
        queue[rear] = x;
        printf("\nThe rear value: %d", rear);
    }
    else
    {
        printf("\nInsert the element in queue: ");
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
        printf("Delete", queue[front]);
        front++;
        printf("\nThe front value: %d", front);
    }
}

void display()
{
    if (front == -1)
        printf("Empty Queue\n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d \n", queue[i]);
        printf("\n");
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Enqueue Operation\n");
        printf("\n2.Dequeue Operation\n");
        printf("\n3.Display the operation\n");
        printf("\nEnter your choice of operations: ");
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

        default:
            printf("Incorrect choice\n");
        }
    }
}
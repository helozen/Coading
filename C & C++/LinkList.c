#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    // user input link list
    struct node *head, *temp, *newNode;

    head = (struct node *)malloc(sizeof(struct node));

    int Data, n, i;

    printf("Enter the number of node you want: ");
    scanf("%d", &n);

    printf("Enter the value of node 1: ");
    scanf("%d", &Data);

    head->data = Data;
    head->next = NULL;

    temp = head;

    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the value of node %d: ", i);
        scanf("%d", &Data);

        newNode->data = Data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }

    // Display link list
    printf("Link List:");
    temp = head;
    while (temp != NULL)
    {
        printf("%d,", temp->data);
        temp = temp->next;
    }

    // search a number
    int p, flag = 0;
    printf("\nEnter the number to search in link list: ");
    scanf("%d", &p);

    temp = head;
    while (temp != NULL)
    {
        if (temp->data == p)
        {
            printf("The number is found.");
            flag = 1;
            break;
        }

        temp = temp->next;
    }
    if (flag == 0)
    {
        printf("Number is not found.");
    }
}

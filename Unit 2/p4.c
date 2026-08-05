#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void insert();
void delete();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n*** QUEUE OPERATIONS MENU ***\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

void insert()
{
    int item;

    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter an element: ");
        scanf("%d", &item);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = item;
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

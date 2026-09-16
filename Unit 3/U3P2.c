#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *l1 = NULL;
struct Node *l2 = NULL;

void create1()
{
    struct Node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes for List 1: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));

        if(newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(l1 == NULL)
        {
            l1 = newnode;
        }
        else
        {
            temp = l1;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
}

void create2()
{
    struct Node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes for List 2: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));

        if(newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(l2 == NULL)
        {
            l2 = newnode;
        }
        else
        {
            temp = l2;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
}

void display1()
{
    struct Node *temp = l1;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void display2()
{
    struct Node *temp = l2;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void merge()
{
    struct Node *ptr;

    if(l1 == NULL)
    {
        l1 = l2;
    }
    else
    {
        ptr = l1;

        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = l2;
    }

    printf("Merged List: ");
    display1();
}

int main()
{
    int ch;

    do
    {
        printf("\n1. Create List 1");
        printf("\n2. Create List 2");
        printf("\n3. Display List 1");
        printf("\n4. Display List 2");
        printf("\n5. Merge");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                create1();
                break;

            case 2:
                create2();
                break;

            case 3:
                display1();
                break;

            case 4:
                display2();
                break;

            case 5:
                merge();
                break;

            case 6:
                printf("Program exited\n");
                break;

            default:
                printf("Wrong choice\n");
        }

    } while(ch != 6);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *start = NULL;

void create()
{
    struct node *ptr, *preptr;
    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        ptr = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &ptr->data);
        ptr->prev = NULL;
        ptr->next = NULL;
        if(start == NULL) {
            start = ptr;
        } else {
            preptr = start;
            while(preptr->next != NULL) {
                preptr = preptr->next;
            }
            preptr->next = ptr;
            ptr->prev = preptr;
        }
    }
}

void display()
{
    struct node *ptr;
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    ptr = start;
    printf("List elements: ");
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_beginning()
{
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->prev = NULL;
    ptr->next = start;
    if(start != NULL) {
        start->prev = ptr;
    }
    start = ptr;
}

void insert_end()
{
    struct node *ptr, *preptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if(start == NULL) {
        ptr->prev = NULL;
        start = ptr;
        return;
    }
    preptr = start;
    while(preptr->next != NULL) {
        preptr = preptr->next;
    }
    preptr->next = ptr;
    ptr->prev = preptr;
}

int main()
{
    int choice;
    while(1) {
        printf("\n1. Create\n2. Display\n3. Insert beginning\n4. Insert End\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_beginning();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

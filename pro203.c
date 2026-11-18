// Leet Code Program 203 - Remove Element from Linked List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *start = NULL;

void insert() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}

void delete_first() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *ptr = start;
    start = start->next;
    free(ptr);
}

void delete_last() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (start->next == NULL) {
        free(start);
        start = NULL;
        return;
    }
    struct node *ptr = start, *prev = NULL;
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
}

void delete_specific() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    int val, found = 0;
    printf("Enter the node value to delete: ");
    scanf("%d", &val);


    while (start != NULL && start->data == val) {
        struct node *temp = start;
        start = start->next;
        free(temp);
        found = 1;
    }
    struct node *ptr = start, *prev = NULL;
    while (ptr != NULL) {
        if (ptr->data == val) {
            prev->next = ptr->next;
            free(ptr);
            ptr = prev->next;
            found = 1;
        } else {
            prev = ptr;
            ptr = ptr->next;
        }
    }

    if (found) {
        printf("Node(s) with value %d deleted.\n", val);
    } else {
        printf("Node with value %d not found.\n", val);
    }
}

void display() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *ptr = start;
    while (ptr != NULL) {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main() {
    int ch;
    while (1) {
        printf("\n--- MENU ---");
        printf("\n1. Insert at Beginning");
        printf("\n2. Delete First");
        printf("\n3. Delete Specific Node");
        printf("\n4. Delete Last");
        printf("\n5. Display");
        printf("\n6. EXIT");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                delete_first();
                break;
            case 3:
                delete_specific();
                break;
            case 4:
                delete_last();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Wrong Choice\n");
        }
    }
}

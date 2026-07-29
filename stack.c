#include<stdio.h>
#include<conio.h>
#define MAX 10

int stack[10];
int top = -1;

//Function to Display push element
void push()
{
    int val;
    if(top==MAX - 1)
    {
        printf("\nStack Overflow Cannot Insert element.\n");
    }
    else
    {
        printf("Enter element to push:");
        scanf("%d",&val);
        top++;
        stack[top] = val;
        printf("Inserted successfully\n");
    }
}

//Function to pop an element from the stack
void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow ! stack is empty.\n");
    }
    else
    {
        printf("Deleted element is:%d\n", stack[top]);
        top--;
    }
}

//Function to Display Stack element

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        printf("\nStack element are:\n");

        for (i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

//main function
void main()
{
    int choice;
    while(1)
    {
        printf("\n----STACK MENU----\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Program terminated.\n");
                exit(0);
                default:
                printf("Invalid choice! Please enter a valid option.\n");

        }
    }
}

//Function to Display Peek element

void peek()
{
    if(top == 1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("topmost element is%d", stack[top]);
    }
}

//Function to Display Stack element

void update()
{
    int i, value;

    printf("enter the element want to update");
    scanf("%d",&i);

    if(top - i + 1 == -1)
    {
        printf("entry not found");
    }
    else
    {
            printf("enter new value: ");
            scanf("%d",&value);
            stack[top - i + 1] =value;
    }
}

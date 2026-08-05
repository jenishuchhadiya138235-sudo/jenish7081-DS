#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top < MAX - 1)
        stack[++top] = ch;
}

char pop() {
    if (top >= 0)
        return stack[top--];
    return '\0';
}

void main() {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    printf("Reversed string: ");

    while (top != -1) {
        printf("%c", pop());
    }

}

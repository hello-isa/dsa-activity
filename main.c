// This is the driver program
#include <stdio.h>
#include <stdlib.h>

// Comment out either the array or linked list to see
// #include "stackarray.h" // For array implementation
#include "stacklinkedlist.h" // For linked list implementation

int main()
{
    // Declare a stack using the LIST type defined in the header file
    STACK stack;
    // Initialize the stack
    initialize(&stack);

    // Push some elements onto the stack
    push(&stack, 'A');
    push(&stack, 'B');
    push(&stack, 'C');

    // Display the stack
    printf("Stack contents: ");
    display(stack);
    printf("\n");

    // Check if the stack is empty
    if (isEmpty(stack) == T)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack is not empty.\n");
    }

    // Check if the stack is full (in your implementation, it's always not full)
    if (isFull(stack) == T)
    {
        printf("Stack is full.\n");
    }
    else
    {
        printf("Stack is not full.\n");
    }

    // Get the top element of the stack
    int topElement = top(stack);
    if (topElement != -1)
    {
        printf("Top element of the stack: %c\n", (char)topElement);
    }
    else
    {
        printf("Stack is empty. Cannot retrieve top element.\n");
    }

    // Pop elements from the stack
    pop(&stack);
    pop(&stack);

    // Display the updated stack
    printf("Stack contents after popping: ");
    display(stack);
    printf("\n");

    return 0;
}
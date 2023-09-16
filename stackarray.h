#ifndef STACKARRAY_H
#define STACKARRAY_H

// Function definition goes here
#define MAX 5
typedef struct
{
    char elem[MAX];
    int top;
} STACK;

typedef enum
{
    F,
    T
} Boolean;

void initialize(STACK *A);
void display(STACK A);
void push(STACK *A, char elem);
void pop(STACK *A);
int top(STACK A);
Boolean isEmpty(STACK A); // either the TOP is -1 or MAX
Boolean isFull(STACK A);  // either the TOP is -1 or MAX

void InsertBottom(STACK *A, char Data);

#endif
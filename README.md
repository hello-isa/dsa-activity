# Stack activity

Create the following:

- .h file for array implementation
- .h file for linked list implementation
- Driver program that works for any .h file without changes
- Java class definition that will be inputted to Javadoc
- Output of Javadoc

## Structure definitions

```c
// Array implementation
#define MAX 5
typedef struct
{
   char elem[MAX];
   int top;
} STACK;

// Linked list implementation
typedef struct node
{
   char elem;
   struct node *link;
} *LIST;
```

## Function prototypes

```c
typedef enum{
    F, T
} boolean;

// Array implementation
void initialize(STACK *A);
void display(STACK A);
void push(STACK *A, char newElem);
void pop(STACK *A);
char top(STACK A);
boolean isEmpty(STACK A);
boolean isFull(STACK A);

// Linked list implementation
void initialize(LIST *A);
void display(LIST A);
void push(LIST *A, char newElem);
void pop(LIST *A);
char top(LIST A);
boolean isEmpty(LIST A);
boolean isFull(LIST A);

// Main
insertBottom()
```

## Header files

- stackarray.h

```c
#ifndef MY_LIB
#define STACKARRAY_H
//Function definition goes here

#endif
```

- stacklinkedlist.h

```c
#ifndef MY_LIB
#define STACKLINKEDLIST_H
//Function definition goes here

#endif
```

- main.c

```c
#include "stackarray.h" // For array implementation
#include "stacklinkedlist.h" // For linked list implementation
```

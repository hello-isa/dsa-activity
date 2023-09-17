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
} *STACK;
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
int top(STACK A);
boolean isEmpty(STACK A);
boolean isFull(STACK A);

// Linked list implementation
void initialize(STACK *A);
void display(STACK A);
void push(STACK *A, char newElem);
void pop(STACK *A);
int top(STACK A);
boolean isEmpty(STACK A);
boolean isFull(STACK A);

// Main
insertBottom()
```

## Header files

- stackarray.h

```c
#ifndef STACKARRAY_H
#define STACKARRAY_H
//Function definition goes here

#endif
```

- stacklinkedlist.h

```c
#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H
//Function definition goes here

#endif
```

- main.c

```c
#include "stackarray.h" // For array implementation
#include "stacklinkedlist.h" // For linked list implementation
```

# How to run and compile the .h and .c files

- Make sure you have both the .h and .c files in the same directory.
- Open the command prompt with the correct file path.
- If you have the GCC compiler installed, you can compile the program with this command:

```console
gcc main.c -o my_stack_program
```

```console
./my_stack_program
```

If an error appears saying:

```console
'.' is not recognized as an internal or external command,
operable program or batch file.
```

Run the executable:

```console
my_stack_program.exe
```

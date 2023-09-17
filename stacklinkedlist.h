#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H

// Function definition goes here
typedef enum
{
	F,
	T
} boolean;

typedef struct node
{
	char data;
	struct node *link;
} *STACK;

void initialize(STACK *A);
void display(STACK A);
void push(STACK *A, char newElem);
void pop(STACK *A);
STACK top(STACK A);
boolean isEmpty(STACK A);
boolean isFull(STACK A);

void initialize(STACK *A)
{
	*A = NULL;
}

void display(STACK A)
{
	STACK temp;
	for (temp = A; temp != NULL; temp = temp->link)
	{
		printf("[%c]->", temp->data);
	}
}

void push(STACK *A, char newElem)
{
	STACK newNode;
	newNode = (STACK)malloc(sizeof(struct node));
	if (newNode == NULL)
	{
		printf("Allocation Failed!");
	}
	else
	{
		if (*A == NULL)
		{
			newNode->data = newElem;
			newNode->link = NULL;
			*A = newNode;
		}
		else
		{
			newNode->data = newElem;
			newNode->link = *A;
			*A = newNode;
		}
	}
}

void pop(STACK *A)
{
	STACK temp;
	temp = *A;
	*A = (*A)->link;
	free(temp);
}

STACK top(STACK A)
{
	return A;
}

boolean isEmpty(STACK A)
{
	return (A == NULL) ? T : F;
}

boolean isFull(STACK A)
{
	STACK newNode = (STACK)malloc(sizeof(struct node));

	// Check if memory allocation is successful
	if (newNode != NULL)
	{
		// Memory was successfully allocated, list not full
		free(newNode); // Deallocate the memory to avoid memory leaks
		return F;
	}
	else
	{
		// Memory allocation failed, list is full
		return T;
	}
}
#endif

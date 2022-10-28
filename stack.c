#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;

}node;

// Definition of head pointer

node* head = NULL;

// Push function

int push(int data)
{
    // If stack is empty

    if(head == NULL)
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;

        head = temp;
    }

    // If stack is not empty

    else
    {
        node* temp = malloc(sizeof(node));
        temp -> data =data;
        temp -> next = head;

        head = temp;
    }

    return 1;
}

// Pop function

int pop()
{
    // If stack is empty

    if(head == NULL)
    {
        printf("Stackis empty!\n");
        return 1;
    }

    node* temp = head;

    head = head -> next;

    free(temp);

    return 1;
}

// Print function

int printStack()
{
    if(head == NULL)
    {
        printf("Stack is empty!\n");
        return 1;
    }

    node* index = head;

    while(index != NULL)
    {
        printf("%i -", index -> data );

        index = index -> next;
    }

    printf("\n");

    return 1;
}

int main(void)
{

    push(5);
    push(3);
    push(7);
    push(16);

    printStack();

    pop();
    pop();

    printStack();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Definition of queue node

typedef struct node
{
    int data;
    struct node* next;

}node;

// Head and tail pointers

node* head = NULL;
node* tail = NULL;


// funciton

int addQueue(int data)
{
    // if queue is empty

    if(head == NULL)
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;

        head = temp;
        tail = temp;
    }

    // if queue is not empty

    else
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;
        tail -> next = temp;

        tail = temp;

    }
}

int main()
{






    return 0;
}

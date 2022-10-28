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


// Add funciton

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

// Delete function

int deleteQueue()
{
    // if queue is empty

    if (head == NULL)
    {
        printf("Queue is empty!\n");
        return 1;
    }

    node* temp = head;
    head = head -> next;

    free(temp);

    return 1;
}

// print function for queue

int printQueue()
{
    // if queue is empty

    if(head == NULL)
    {
        printf("Queue is empty!\n");

        return 1;
    }

    node* index = head;

    while (index != NULL)
    {
        printf("%i - ", index -> data);
        index = index -> next;
    }
    printf("\n");
}

int main()
{

    addQueue(5);
    addQueue(12);
    addQueue(3);
    addQueue(7);

    printQueue();

    deleteQueue();

    printQueue();




    return 0;
}

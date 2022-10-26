#include <stdio.h>
#include <stdlib.h>


// Linked list

typedef struct node
{
    int data;
    struct node* next;

}node;

// Head & Tail

struct node* head = NULL;
struct node* tail = NULL;

// function that adds an element to the end of the list

int addNodeTail(int data)
{

    // if linked list is empty

    if(head == NULL)
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;

        head = temp;
        tail = temp;
    }

    // if linked list is not empty

    else
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;

        tail -> next = temp;
        tail = temp;
    }

    return 0;
}
// function that adds an element to the start of the list

int addNodeHead(int data)
{
    // if linked list is empty

    if(head == NULL)
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = NULL;

        head = temp;
        tail = temp;
    }

    // if linked list is not empty

    else
    {
        node* temp = malloc(sizeof(node));
        temp -> data = data;
        temp -> next = head;

        head = temp;
    }

    return 0;
}

int printNode()
{
    node* index = head;

    while(index != NULL)
    {
        printf("%d - ", index -> data);

        index = index -> next;
    }
}

int main()
{
    addNodeTail(10);
    addNodeTail(4);
    addNodeTail(28);

    addNodeHead(15);
    addNodeHead(36);

    printNode();





    return 0;
}

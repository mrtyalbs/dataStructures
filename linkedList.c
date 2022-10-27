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

    return 1;
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

    return 1;
}

int printNode()
{
    node* index = head;

    while(index != NULL)
    {
        printf("%d - ", index -> data);

        index = index -> next;
    }
    printf("\n");
}
// function that deletes an element to the list

int deleteNode(int data)
{
    node* prev = NULL;
    node* temp = head;

    // if linked list is empty

    if(head == NULL)
    {
        printf("The list is empty!\n");
        return 1;
    }

    // delete head element

    if(data == head -> data)
    {
        node* temp = head;
        head = head -> next;
        free(temp);
        return 1;
    }

    while(temp != NULL && temp -> data != data)
    {
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL)
    {
        printf("Data not found\n");
        return 1;
    }

    prev -> next = temp -> next;

    if(tail -> data == data)
    {
        tail = prev;
    }

    free(temp);

    return 1;
}

int main()
{
    addNodeTail(10);
    addNodeTail(4);
    addNodeTail(28);

    addNodeHead(15);
    addNodeHead(36);

    printNode();

    deleteNode(28);
    deleteNode(36);
    deleteNode(118);
    printNode();





    return 0;
}

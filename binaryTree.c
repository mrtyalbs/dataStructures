#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;

}node;

node* newNode(int data)
{
    node* temp = malloc(sizeof(node));

    temp -> data = data;

    temp -> left = NULL;
    temp -> right = NULL;

    return temp;
};




int main(void)
{

    // Root

    node* root = newNode(1);

    root -> left = newNode(2);
    root -> right = newNode(3);

    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);

    root -> right -> left = newNode(6);
    root -> right -> right = newNode(7);



    return 0;
}

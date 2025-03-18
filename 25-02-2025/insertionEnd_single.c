#include <stdio.h>
#include <stdlib.h>
//create a structre
struct Node
{
    int data;
    struct Node* next;
}

//create a node
struct Node* newNode(int value)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node -> data = value;
    node -> next = NULL;
    return node;
}

//to insert at the end 
struct node* atend(struct node* head, int value)
{
    struct Node* temp = head;
    if ( temp == NULL )
    {
        temp -> data = value;
    }
    
}


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* link;
};

struct node* NEWnode ( int value ){
    struct node* temp = (struct node*) malloc (sizeof(struct node));
    temp -> data = value;
    temp -> prev = NULL;
    temp -> link = NULL;
    return temp;
}


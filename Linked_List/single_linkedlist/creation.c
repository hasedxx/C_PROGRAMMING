#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE* next;
};

struct NODE* newNode( int value ){
    struct NODE* temp = (struct NODE* ) malloc (sizeof(struct NODE));
    temp -> data = value;
    temp -> next = NULL;
    return temp;
}

void tranverse(struct NODE* head){
    while (head != NULL )
    {
        printf("%d ", head -> data);
        head = head -> next;
    }
    printf("\n");
    
}

int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    struct NODE* head = newNode(10);
    head -> next = newNode(50);
    head -> next -> next = newNode(30);
    tranverse(head);
    return 0;
}
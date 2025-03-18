#include <stdio.h> 
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* link;
};

struct node* NEWnode( int value ){
    struct node* temp = (struct node*) malloc (sizeof(struct node));
    temp -> data = value;
    temp -> prev = NULL;
    temp -> link = NULL;
    return temp;
}

void count_node( struct node* head ){
    if( head == NULL )
    printf("NULL");

    int count = 0;
    struct node* curr = head;
    while( curr != NULL ){
        count += 1;
        curr = curr -> link;
    }
    printf("The number of node = %d", count);
}

int main(){
    printf("Navedul Hasan Ahmad   590011772\n");
    int n, value;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    struct node* head = NULL, *temp = NULL;

    for( int i=0 ;i<n; i++){
        printf("Enter the %d element = ", i+1);
        scanf("%d", &value);
        struct node* new_node = NEWnode(value);
        if (head == NULL ){
            head = new_node;
            temp = head;
        }
        else{
            temp -> link = new_node;
            temp = new_node;
        }
    }

    count_node(head);
    return 0;
}
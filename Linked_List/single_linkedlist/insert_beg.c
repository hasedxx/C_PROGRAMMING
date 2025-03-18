#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* NEWnode(int value){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    return temp;
}

struct node* insert_beg( struct node* head, int value ){
    struct node* newnode = NEWnode(value);
    newnode->link = head;
    return newnode;
}

void printlist( struct node* head ){
    if( head == NULL ){
        printf("The list is empty");
    }

    struct node* curr = head;
    while( curr != NULL ){
        printf("%d -> ", curr->data);
        curr = curr->link;
    }
    printf("NULL");
}


int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    struct node* head = NULL, *temp = NULL;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    for( int i = 0; i<n; i++ ){
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

    int choice;
    printf("Enter the value to be added = ");
    scanf("%d", &choice);
    head = insert_beg(head,choice);
    printlist(head);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* NEWnode( int value ){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = value;
    temp -> link = NULL;
    return temp;
}

struct node* insertend( struct node* head, int value){
    struct node* curr = NEWnode(value);
    struct node* temp = head;
    if( head == NULL){
        head = curr;
    }

    while( temp->link != NULL){
        temp = temp -> link;
    }
    temp -> link = curr;
    return head;
}

struct node* reverse( struct node * head){
    struct node* curr = head;
    if( head == NULL ){
        printf("NULL");
    }

    while( curr != NULL){
        curr = curr -> link;
        curr = reverse(head);
    }
    return head;
}

void printlist( struct node * head ){
    if(head == NULL){
        printf("NULL");
    }

    struct node* curr = head;
    while( curr != NULL){
        printf("%d -> ", curr -> data);
        curr = curr -> link;
    }
    printf("NULL");
}

int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    printf("Enter the number of elements");
    scanf("%d", &n);
    struct node* head = NULL;

    for( int i = 0; i< n; i++ ){
        printf("Enter the %d element = ");
        scanf("%d", &value);
        head = insertend(head, value);
    }

    printlist(head);

    head = reverse(head);
    printlist(head);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* NEWnode( int value ){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = value;
    temp -> link = NULL;
    return temp;
}

struct node* dele_beg(struct node* head){
    if(head == NULL)
    return head;

    head = head -> link;
    return head;
}

void printlist(struct node * head){
    if( head == NULL )
    printf("NULL");

    struct node* curr = head;
    while (curr != NULL){
        printf("%d -> ", curr->data);
        curr = curr->link;
    }
    printf("NULL");
}

int main(){
    printf("Navedul Hasan Ahmad   590011772\n");
    int n, value;
    printf("Enter the number of element = ");
    scanf("%d", &n);
    struct node* head = NULL, *temp = NULL;
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

    head = dele_beg(head);
    printlist(head);
    return 0;
}
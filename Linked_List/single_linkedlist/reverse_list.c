#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* NEWnode(int value){
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = value;
    new->link = NULL;
    return new;
}

struct node* rev_list( struct node * head ){
    if( head == NULL )
    return head;

    struct node *prev = NULL;
    struct node *next = NULL;
    while ( head!=NULL ){
        next = head ->link;
        head -> link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

void printlist( struct node* head ){
    if( head == NULL )
    printf("List is empty\n");

    while ( head != NULL){
        printf("%d -> ", head-> data);
        head = head -> link;
    }
    printf("NULL");
}

int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    printf("Enter the number of elements = ");
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
    
    
    head = rev_list(head);
    printlist(head);
    return 0;
}
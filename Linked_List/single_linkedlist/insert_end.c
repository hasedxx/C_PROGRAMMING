#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* NEWnode( int value ){
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new -> data = value;
    new -> link = NULL;
    return new;
}

void insert_end(struct node* head, int value){
    struct node* curr;
    struct node* temp = NEWnode(value);
    curr = head;

    while( curr->link != NULL ){
        curr = curr -> link;
    }
    curr -> link = temp;
}

void printlist( struct node* head ){
    if( head == NULL ){
        printf("List is empty");
        return;
    }
    struct node* curr = head;
    while (curr != NULL )
    {
        printf("%d -> ", curr->data);
        curr = curr->link;
    }
    printf("NULL\n");
}

int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    struct node* head = NULL, *temp = NULL;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    for( int i = 0; i<n; i++)
    {
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
    printf("Enter the value to be inserted = ");
    scanf("%d", &choice);

    insert_end(head, choice);
    printlist(head);
    return 0;


}

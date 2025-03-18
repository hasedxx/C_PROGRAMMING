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

void count_node(struct node* head){
    int count = 0;
    if( head == NULL )
    printf("List is empty");
    struct node* current = head;
    while( current != NULL )
    {
        count += 1;
        current = current -> link;
    }
    printf("The number of node = %d", count);
}

void printlist(struct node* head){
    if (head == NULL ){
        printf("The list is empty");
    }
    struct node* current = head;
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->link;
    }
}

int main (){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    struct node* head = NULL, *temp = NULL;
    printf("Enter the number of data = ");
    scanf("%d", &n);

    for( int i = 0; i<n; i++ )
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

    printlist(head);
    count_node(head);
    return 0;
}
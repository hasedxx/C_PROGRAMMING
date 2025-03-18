#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* NEWnode( int value ){
    struct node* temp = (struct node*) malloc (sizeof(struct node));
    temp -> data = value;
    temp -> link = NULL;
    return temp;
}

struct node* dele_pos( struct node* head, int pos ){
    if (head == NULL ){
        return head;
    }

    if (pos == 1){
        return NULL;
    }

    struct node* curr = head;
    struct node* temp;
    for ( int i = 0; i<pos-2; i++ ){
        curr = curr -> link;
    }
    temp = curr -> link -> link;
    curr -> link = temp;
    return head;

}

void printlist( struct node* head ){
    if ( head == NULL )
    printf("NULL");

    struct node* curr = head;
    while ( curr != NULL ){
        printf("%d -> ", curr -> data);
        curr = curr -> link;
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
    
    int pos;
    printf("Enter the position you want to delete = ");
    scanf("%d", &pos);
    head = dele_pos(head, pos);
    printlist(head);
    return 0;
}
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

struct node* insert ( struct node* head, int value ){
    struct node* curr = NEWnode(value);
    struct node* temp;
    

    int key = value;
    if ( head == NULL || key < head -> data ){
        curr -> link = head;
        head = curr;
        return head;
    }
    else{
        temp = head;
        while ( temp -> link != NULL && temp -> link -> data < key ){
            temp = temp -> link;
        }
        curr -> link = temp -> link;
        temp -> link = curr;
        return head;
    }
}

void printlist(struct node* head ){
    if( head == NULL ){
        printf("NULL");
    }
    
    struct node * curr = head;
    while( curr!=NULL){
        printf("%d -> ", curr->data);
        curr = curr->link;
    }
    printf("NULL");
}

int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    printf("Enter the number of node = ");
    scanf("%d", &n);

    struct node* head = NULL, *temp = NULL;
    for( int i = 0; i<n; i++ ){
        printf("Enter the %d element = ",i+1);
        scanf("%d", &value);
        head = insert(head, value);
    }

    printlist(head);
    return 0;
}
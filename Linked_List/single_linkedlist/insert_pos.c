#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* NEWnode(int value){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    return temp;
}

struct node* insert_pos(struct node* head, int value, int pos){
    if(head == NULL ){
        struct node* temp = NEWnode(value);
        printf("%d -> ", temp->data);
        return temp;
    }

    struct node* curr = head;
    struct node* temp = NEWnode(value);
    for ( int i = 0; i<pos-1; i++){
        curr = curr->link;
    }
    temp -> link = curr->link;
    curr -> link = temp;
    return head;
}

void printlist(struct node* head){
    if (head == NULL)
    {
        printf("The list is empty");
    }

    struct node* curr = head;
    while( curr!=NULL){
        printf("%d -> ", curr->data);
        curr = curr->link;
    }
    printf("NULL");
}

int main (){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, value;
    struct node* head = NULL, *temp = NULL;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    for( int i = 0; i<n; i++ ){
        printf("Enter the %d element = ",i+1);
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

    int pos, data;
    printf("Enter the position you want to add = ");
    scanf("%d", &pos);

    printf("Enter the data = ");
    scanf("%d", &data);

    head = insert_pos(head, data, pos);
    printlist(head);
    return 0;
}
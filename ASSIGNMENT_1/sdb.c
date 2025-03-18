
#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node* next;
};

struct node* new_node( int value ){
struct node* node = (struct node*)malloc(sizeof(struct node));
node -> data = value;
node -> next = NULL;
return node;
}

struct node* insert(struct node* head, int value){
struct node* new= new_node(value);
new -> next = head;
return new;
}

void print(struct node* head){
struct node* temp = head;
while ( temp != NULL ){
printf("%d ->", temp -> data);
temp = temp -> next;
}

printf("NULL\n");
}

int main ()
{
struct node* head = NULL;
int choice;
printf("Enter the value to be inserted = ");
scanf("%d", &choice);

head = insert(head, choice);
head = insert(head, 65);
head = insert(head, 69);

printf("Linked list = ");
print(head);
return 0;
}


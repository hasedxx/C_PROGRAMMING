#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // For using 'bool'

struct Node
{
    int data;
    struct Node* next;
};

struct Node* create(int value)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

// Function to insert a node at the end of the linked list
struct Node* insertEnd(struct Node* head, int value)
{
    struct Node* newnode = create(value);
    if (head == NULL)
        return newnode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    return head;
}

bool search(struct Node* head, int key)
{
    struct Node* curr = head;
    while (curr != NULL)
    {
        if (curr->data == key)
            return true;
        curr = curr->next;
    }
    return false;
}

void print( struct Node* head){
    struct Node* curr = head;
    while (curr != NULL)
    {
        printf("%d", curr->data);
        curr = curr -> next;
    }
    printf("\n");
}

int main()
{
    printf("Navedul Hasan Ahmad   590011772\n");

    struct Node* head = NULL; // Initialize head pointer
    int n;

    printf("Enter the number of elements in the linked list = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        printf("Enter element %d of the linked list = ", i + 1);
        scanf("%d", &num);
        head = insertEnd(head, num);
    }

    int ser;
    printf("Enter the element to be searched = ");
    scanf("%d", &ser);

    if (search(head, ser))
        printf("Yes\n");
    else
        printf("No\n");
    print(head);

    return 0;
}

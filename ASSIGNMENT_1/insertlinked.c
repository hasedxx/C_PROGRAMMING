#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

// Function to insert a new node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* new_node = newNode(value);
    new_node->next = head;
    return new_node; // New node becomes the head
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Fucntion to insert at the end of the linked list 
struct Node* insertAtEnd( struct Node* head, int value){
    struct Node* new_node = newNode(value);
    if (head == NULL )
    {
        return new_node;
    }
    
    struct Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    
    temp->next = new_node;

    // Return the head of the list
    return head;
}

struct Node* insertAtpos( struct Node* head, int pos, int value){
    if (pos<1)
    return head;

    if (pos == 1)
    {
        struct Node* new_node = newNode(value);
        new_node -> next = head;
        return new_node;
    }

    struct Node *curr = head;
    for ( int i = 1; i<pos-1 &&curr != NULL; i++ )
    {
        curr = curr -> next;
    }

    if ( curr == NULL )
    {
        return head;
    }
    struct Node* new_node = newNode(value);

    // Update the next pointers
    new_node->next = curr->next;
    curr->next = new_node;

    return head;
}

struct Node* deleteAtBeginning(struct Node* head) {
  
    // Check if the list is empty
    if (head == NULL)
        return NULL;

    // Store the current head in a 
      // temporary variable
    struct Node* temp = head;

    // Move the head pointer to the next node
    head = head->next;

    // Free the memory of the old head node
    free(temp);

    return head;
}

struct Node* removeLastNode(struct Node* head)
{
    // If the list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    // If the list has only one node, delete it and return
    // NULL
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    // Find the second last node
    struct Node* second_last = head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    // Delete the last node
    free(second_last->next);

    // Change next of second last
    second_last->next = NULL;

    return head;
}


struct Node* deleteNode(struct Node* head, int position)
{
    struct Node* temp = head;
    struct Node* prev = NULL;

    // Base case if linked list is empty
    if (temp == NULL)
        return head;

    // Case 1: Head is to be deleted
    if (position == 1) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Case 2: Node to be deleted is in middle
    // Traverse till given position
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If given position is found, delete node
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    else {
        printf("Data not present\n");
    }

    return head;
}






// Main function
int main() {
    struct Node* head = NULL; // Initialize empty list

    // Insert nodes at the beginning
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);
    int beg, end, pos;
    printf("Enter the data to be inserted = ");
    scanf("%d", &beg);
    head = insertAtBeginning(head, beg);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    printf("Enter the value to be inserted at the end = ");
    scanf("%d", &end);

    head = insertAtEnd(head, end);
    printf("Linked List ");
    printList(head);

    printf("Enter the position where you want to add = ");
    scanf("%d", &pos);
    int vl;
    printf("Enter the value to be added = ");
    scanf("%d", &vl);
    head = insertAtpos(head, pos, vl);
    printf("Linked List ");
    printList(head);

    printf("Deletion of first Node = ");
    head = deleteAtBeginning(head);
    printList(head);

    printf("Deletion of last Node = ");
    head = removeLastNode(head);
    printList(head);

    int poss;
    printf("Enter the postion to be deleted = ");
    scanf("%d", &poss);
    head = deleteNode(head, poss);

    printf("Deletion of last Node = ");
    printList(head);

    



    return 0;
}

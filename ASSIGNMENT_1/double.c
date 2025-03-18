#include <stdio.h>
#include <stdlib.h>

struct Node {

    // To store the Value or data.
    int data;

    // Pointer to point the Previous Element
    struct Node* prev;

    // Pointer to point the Next Element
    struct Node* next;
};

// Function to create a new node
struct Node *createNode(int new_data) {
    struct Node *new_node = (struct Node *)
    malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

struct Node *insertAtFront(struct Node *head, int new_data) {

    // Create a new node
    struct Node *new_node = createNode(new_data);

    // Make next of new node as head
    new_node->next = head;

    // Change prev of head node to new node
    if (head != NULL) {
        head->prev = new_node;
    }

    // Return the new node as the head of the doubly linked list
    return new_node;
}

void printList(struct Node *head) {
    struct Node *curr = head;
    while (curr != NULL) {
        printf(" %d", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

struct Node* insertEnd(struct Node *head, int new_data) {
    struct Node *new_node = createNode(new_data);

    // If the linked list is empty, set the new node as the head
    if (head == NULL) {
        head = new_node;
    } else {
        struct Node *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }

        // Set the next of last node to new node
        curr->next = new_node;
        // Set prev of new node to last node
        new_node->prev = curr;
    }

    return head;
}

int main() {

    // Create a hardcoded doubly linked list:
    // 2 <-> 3 <-> 4 -> NULL
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->prev = head;
    head->next->next = createNode(30);
    head->next->next->prev = head->next;

    // Print the original list
    printf("Original Linked List:");
    printList(head);

    // Insert a new node at the front of the list
    int ft;
    printf("Enter the element to be added at the beginning:");
    scanf("%d", &ft);
    head = insertAtFront(head, ft);

    // Print the updated list
    printList(head);

    int ed;
    printf("Enter the elements to be added at the end: ");
    scanf("%d",&ed);

    head = insertEnd(head, ed);
    printList(head);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertatstart(struct Node** head, int data);
void insertatend(struct Node** head, int data);
void insertatpos(struct Node** head, int data, int position);
void deletefromstart(struct Node** head);
void deletefromend(struct Node** head);
void deletefrompos(struct Node** head, int position);
int search(struct Node* head, int data);
void reverselist(struct Node** head);
struct Node* mergelists(struct Node* head1, struct Node* head2);
void displaylist(struct Node* head);
int detectloop(struct Node* head);
void menu();

int main() {
    struct Node* head = NULL;
    int choice, data, position;
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    while (1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertatstart(&head, data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertatend(&head, data);
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insertatpos(&head, data, position);
                break;
            case 4:
                deletefromstart(&head);
                break;
            case 5:
                deletefromend(&head);
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deletefrompos(&head, position);
                break;
            case 7:
                printf("Enter data to search: ");
                scanf("%d", &data);
                position = search(head, data);
                if (position != -1)
                    printf("Element found at position %d\n", position);
                else
                    printf("Element not found\n");
                break;
            case 8:
                reverselist(&head);
                break;
            case 9:
                printf("Enter data for first list (end with -1):\n");
                while (1) {
                    scanf("%d", &data);
                    if (data == -1) break;
                    insertatend(&head1, data);
                }
                printf("Enter data for second list (end with -1):\n");
                while (1) {
                    scanf("%d", &data);
                    if (data == -1) break;
                    insertatend(&head2, data);
                }
                head = mergelists(head1, head2);
                break;
            case 10:
                displaylist(head);
                break;
            case 11:
                if (detectloop(head))
                    printf("Loop detected in the list\n");
                else
                    printf("No loop detected in the list\n");
                break;
            case 12:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

void menu() {
    printf("\nMenu:\n");
    printf("1. Insert at the beginning\n");
    printf("2. Insert at the end\n");
    printf("3. Insert at the given position\n");
    printf("4. Delete from the beginning\n");
    printf("5. Delete from the end\n");
    printf("6. Delete from the given position\n");
    printf("7. Search an element\n");
    printf("8. Reverse the list\n");
    printf("9. Merge two lists\n");
    printf("10. Display the list\n");
    printf("11. Detect loop in the list\n");
    printf("12. Exit\n");
}

void insertatstart(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertatend(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertatpos(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deletefromstart(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deletefromend(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    if (temp->next == NULL) {
        *head = NULL;
        free(temp);
        return;
    }
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deletefrompos(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range\n");
        return;
    }
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

int search(struct Node* head, int data) {
    int position = 1;
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

void reverselist(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

struct Node* mergelists(struct Node* head1, struct Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;
    if (head1->data < head2->data) {
        head1->next = mergelists(head1->next, head2);
        return head1;
    } else {
        head2->next = mergelists(head1, head2->next);
        return head2;
    }
}

void displaylist(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int detectloop(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }
    return 0;
}
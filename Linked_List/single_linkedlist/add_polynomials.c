#include <stdio.h>
#include <stdlib.h>

struct node{
    int coff;
    int deg;
    struct node * link;
};

struct node* NEWnode( int coff, int deg ){
    struct node* temp = (struct node* ) malloc(sizeof(struct node));
    temp -> coff = coff;
    temp -> deg = deg;
    temp -> link = NULL;
    return temp;
}

struct node* sorted ( struct node* head, int coff, int deg ){
    struct node* curr = NEWnode(coff, deg);
    struct node* temp = head;
    if( head == NULL || head -> deg < deg){
        curr -> link = head;
        head = curr;
    }
    else{
        while( temp->link != NULL && temp->link ->deg > deg){
            temp = temp->link;
        }
        curr -> link = temp -> link;
        temp -> link = curr;
    }
    return head;
}

void printlist( struct node* head ){
    if( head == NULL ){
        printf("NULL");
    }

    struct node* temp = head;
    while( temp != NULL ){
        printf("%d ", temp -> coff);
        printf("%d -> ", temp -> deg);
        temp = temp -> link;
    }
}

void addpoly( struct node* head1, struct node* head2 ){
    struct node* ptr1 = head1;
    struct node* ptr2 = head2;
    struct node* result = NULL;

    while( ptr1 != NULL & ptr2 != NULL ){
        if( ptr1->deg == ptr2->deg ){
            result = sorted(result, ptr1->coff+ptr2->coff, ptr1->deg);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }

        else if( ptr1->deg > ptr2->deg ){
            result = sorted(result, ptr1->coff, ptr1-> deg);
            ptr1 = ptr1-> link;
        }
        else if( ptr1 -> deg < ptr2-> deg){
            result = sorted(result, ptr2->coff, ptr2->deg);
            ptr2 = ptr2 -> link;
        }
    }
    while( ptr1!= NULL){
        result = sorted( result, ptr1->coff, ptr1->deg);
        ptr1 = ptr1->link;
    }
    while( ptr2!= NULL){
        result = sorted( result, ptr2->coff, ptr2->deg);
        ptr2 = ptr2->link;
    }

    printf("Result is = ");
    printlist(result);
}


int main(){
    printf("Navedul Hasan Ahmad   590011772\n");
    int n1,n2, coff, deg;
    struct node* head1 = NULL, *head2= NULL;
    printf("Enter the number of elements of poly1 = ");
    scanf("%d", &n1);
    for( int i = 0; i<n1; i++ ){
        printf("Enter the coff of %d element = ", i+1);
        scanf("%d", &coff);
        printf("Enter the deg of %d element = ", i+1);
        scanf("%d", &deg);
        head1 = sorted(head1, coff, deg); 
    }

    printf("Enter the number of elements of poly2 = ");
    scanf("%d", &n2);
    for( int i = 0; i<n2; i++ ){
        printf("Enter the coff of %d element = ", i+1);
        scanf("%d", &coff);
        printf("Enter the deg of %d element = ", i+1);
        scanf("%d", &deg);
        head2 = sorted(head2, coff, deg); 
    }

    addpoly(head1, head2);
    return 0;
}
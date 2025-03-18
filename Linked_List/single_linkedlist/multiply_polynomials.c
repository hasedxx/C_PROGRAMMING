#include <stdio.h>
#include <stdlib.h>

struct node{
    int coff;
    int deg;
    struct node* link;
};

struct node* NEWnode( int coff, int deg ){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    temp -> coff = coff;
    temp -> deg = deg;
    temp -> link = NULL;
    return temp;
}

struct node* sorted( struct node* head, int coff, int deg ){
    struct node* curr = NEWnode(coff, deg);
    struct node* temp = head;
    if( head == NULL || head ->deg < deg){
        curr -> link = head;
        head = curr;
    }

    else{
        while ( temp -> link != NULL && temp ->link ->deg >deg){
        temp = temp -> link;
        }
        curr -> link = temp -> link;
        temp -> link = curr;
    }
    return head;
}

void printlist( struct node* head ){
    if( head == NULL ){
        printf("NULL");
        return;
    }

    struct node* temp = head;
    while( temp != NULL ){
        printf("%d ", temp -> coff);
        printf("%d -> ", temp -> deg);
        temp = temp -> link;
    }
}

void mulpoly( struct node* head1, struct node* head2){
    struct node* poly1 = head1;
    struct node* poly2 = head2;
    struct node* result = NULL;

    if( head1 == NULL || head2 == NULL)
    {
        printf("ZERO POLYNOMIAL\n");
        return;
    }

    while (poly1 != NULL){
        poly2 = head2;
        while(poly2 != NULL){
            int res1 = poly1->coff * poly2->coff;
            int res2 = poly1->deg + poly2 -> deg;
            result = sorted(result, res1, res2);
            poly2 = poly2->link;
        }
        poly1 = poly1->link;
    }

    struct node* poly3 = result;
    struct node* temp = NULL;
    while (poly3 -> link != NULL){
        if( poly3->deg == poly3 -> link -> deg ){
            poly3 -> coff += poly3 -> link -> coff;
            temp = poly3 -> link;
            poly3 -> link = poly3 -> link -> link;
            free(temp);
        }
        else{
            poly3 = poly3 -> link;
        }
    }
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

    mulpoly(head1, head2);
    return 0;
}
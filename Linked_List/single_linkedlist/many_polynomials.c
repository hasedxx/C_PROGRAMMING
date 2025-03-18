#include <stdio.h>
#include <stdlib.h>

struct node{
    int coff;
    int deg;
    struct node* link;
};

struct node* NEWnode( int coff, int deg ){
    struct node* temp = (struct node*) malloc (sizeof(struct node));
    temp -> coff = coff;
    temp -> deg = deg;
    temp -> link = NULL;
    return temp;
}

struct node* sorted ( struct node* head, int coff, int deg ){
    struct node* curr = NEWnode( coff, deg );
    struct node* temp = head;

    if( head == NULL || head -> deg < deg){
        curr -> link = head;
        head = curr;
    }
    else{
        while( temp -> link != NULL && temp ->link -> deg > deg){
            temp = temp -> link;
        }
        curr -> link = temp -> link;
        temp -> link = curr;
    }
    return head;
}

void printlist(struct node* head ){
    if( head == NULL ){
        printf("NULL");
    }
    
    struct node * curr = head;
    while( curr!=NULL){
        printf("%d ", curr->coff);
        printf("%d -> ", curr -> deg);
        curr = curr->link;
    }
    printf("NULL\n");
}

int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n1,n2, coff, deg;
    printf("Enter the number of node of 1 poly = ");
    scanf("%d", &n1);

    struct node* head1 = NULL,*head2 = NULL;
    for( int i = 0; i<n1; i++ ){
        printf("Enter the %d coff = ",i+1);
        scanf("%d", &coff);
        printf("Enter the %d deg = ",i+1);
        scanf("%d", &deg);
        head1 = sorted(head1, coff, deg);
    }


    printf("Enter the number of node of 1 poly = ");
    scanf("%d", &n2);
    for( int i = 0; i<n2; i++ ){
        printf("Enter the %d coff = ",i+1);
        scanf("%d", &coff);
        printf("Enter the %d deg = ",i+1);
        scanf("%d", &deg);
        head2 = sorted(head2, coff, deg);
    }

    printlist(head1);
    printlist(head2);
    return 0;
}
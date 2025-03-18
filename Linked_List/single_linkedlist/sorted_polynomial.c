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
    printf("NULL");
}

int main(){
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, coff, deg;
    printf("Enter the number of node = ");
    scanf("%d", &n);

    struct node* head = NULL, *temp = NULL;
    for( int i = 0; i<n; i++ ){
        printf("Enter the %d coff = ",i+1);
        scanf("%d", &coff);
        printf("Enter the %d deg = ",i+1);
        scanf("%d", &deg);
        head = sorted(head, coff, deg);
    }

    printlist(head);
    return 0;
}
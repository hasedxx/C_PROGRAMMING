#include<stdio.h>
void swap ( int* x, int* y )
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d\n", *x);
    printf("%d\n", *y);
}

int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int a, b;
    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);

    swap(&a,&b);
    return 0;
}
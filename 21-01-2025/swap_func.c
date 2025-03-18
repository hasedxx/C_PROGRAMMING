#include <stdio.h> 
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("The first number after swap = %d\n", *p);
    printf("The second number after swap = %d", *q);
    return;
}
int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int num1, num2;
    printf("Enter the first number = ");
    scanf("%d", &num1);
    printf("Enter the second number = ");
    scanf("%d", &num2);

    int *p, *q;
    p = &num1;
    q = &num2;

    swap(p,q);
    return 0; 
}
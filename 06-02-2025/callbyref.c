#include <stdio.h>
void swap( int* x, int* y )
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swap the value of first number = %d\n",*x);
    printf("After swap the value of second number = %d\n",*y);
}

int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num1, num2;
    printf("Enter the first number = ");
    scanf("%d", &num1);
    printf("Enter the second number = ");
    scanf("%d", &num2);

    swap( &num1, &num2 );
    return 0;
}
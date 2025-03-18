#include <stdio.h>
void swap( int a , int b )
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The num1 after swap = %d\n",a);
    printf("The num2 after swap = %d",b);
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num1 , num2;
    printf("Enter the number 1 = ");
    scanf("%d", &num1);
    printf("Enter the number 2 = ");
    scanf("%d", &num2);
    swap( num1 , num2 );
    return 0;
}
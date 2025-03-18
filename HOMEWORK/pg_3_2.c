//Write a program to check if the given number is a natural number.
#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num;
    printf("Enter the number to be checked\n");
    scanf("%d", &num);

    if ( num > 0)
    {
        printf("The number is Natural number");
    }
    else {
        printf("Not a natural number");
    }
    return 0;
}
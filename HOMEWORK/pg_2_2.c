//Write a program to check if given character is digit or not.

#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    char a;
    printf("Enter the character to be checked\n");
    scanf("%d", &a);
    if ( a >= 0 && a <= 9)
    {
        printf("The entered character is digit \n");
    }
    else {
        printf("Not a digit\n");
    }
    return 0;

}
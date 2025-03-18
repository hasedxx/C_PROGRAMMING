//Write a program to check if a given number is Armstrong number or not.
#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num, org, sum=0, d;
    printf("Enter the number to be checked\n");
    scanf("%d", &num);
    org=num;
    while ( num > 0)
    {
        d = num % 10;
        sum = ( sum + (d * d * d ));
        num = num / 10;
    }
    if ( sum == org )
    {
        printf("The entered number is Amstrong number");
    }
    else
    {
        printf("The entered number is not an Amstrong number");
    }
    return 0;
}
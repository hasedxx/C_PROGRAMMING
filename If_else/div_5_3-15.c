#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int num;
    printf("Enter the number to be checked\n");
    scanf("%d", &num);

    if ( num % 3 == 0 && num % 5 == 0)
    {
        if ( num % 15 != 0)
        {
            printf("The is num is divisible by 3 and 5 but by 15");
        }
        else 
        {
            printf("Divisible by all the three");
        }

    }
    return 0;
}
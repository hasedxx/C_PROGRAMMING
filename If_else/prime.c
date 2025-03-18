#include <stdio.h>
int main  ()
{
    printf("Navedul    590011772\n");
    int num;
    printf("Enter the nuumber\n");
    scanf("%d", &num);
    if (num>0)
    {
        if (num % 10 ==0)
        {
            printf("The number is prime number\n");
        }
        else{
            printf("The number is not a prime number\n");
        }

    }
    return 0;
}
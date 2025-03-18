#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n,sum=0;
    printf("Enter the last number to be added\n");
    scanf("%d", &n);

    for ( int i = 1; i<=n; i++ )
    {
        sum = sum + i;
    }

    printf("The sum of %d natural numbers is = %d", n,sum);
    return 0;
    
}
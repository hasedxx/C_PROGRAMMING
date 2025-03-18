#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad 590011772\n");
    int n;
    printf("Enter the number of stars\n");
    scanf("%d", &n);

    for ( int i = 1 ; i <= 4 ; i++)
    {
        for ( int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
 int main ()
 {
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of rows of the triangle = ");
    scanf("%d", &n);

    for ( int i = 1; i<=n; i++)
    {
        printf("*");
    }
    printf("\n");

    for ( int i = 1; i<=n; i++ )
    {
        for ( int k = 1; k<=i; k++ )
        {
            printf(" ");
        }

        for ( int j = 1; j<=n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
 }
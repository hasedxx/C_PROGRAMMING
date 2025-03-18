#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n;
    printf("Enter the number of lines\n");
    scanf("%d", &n);
    int str = n;
    int spaces = 1;

    for ( int i = 1; i<=2*n+1; i++)
    {
        printf("*");
    }
    printf("\n");

    for ( int i = 1; i<=n; i++ )
    {
        for ( int j = 1; j<=str; j++ )
        {
            printf("*");
        }

        for ( int k = 1; k<=spaces; k++ )
        {
            printf(" ");
        }

        for ( int j = 1; j<=str; j++ )
        {
            printf("*");
        }

        str--;
        spaces+=2;
        printf("\n");
    }
}
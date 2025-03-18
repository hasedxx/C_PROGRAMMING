#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n;
    printf("Enter the no. of lines\n");
    scanf("%d", &n);

    for( int i = 1; i<=n; i++)
    {
        for ( int j = 1; j<=n-i; j++)
        {
            printf(" ");
        }
        for ( int k = 1; k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
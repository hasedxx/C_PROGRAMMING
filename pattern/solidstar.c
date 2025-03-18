#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enetr the number of stars of the square\n");
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        for ( int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
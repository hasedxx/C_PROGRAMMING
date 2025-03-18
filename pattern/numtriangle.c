#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enter the rows of the triangle\n");
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        for ( int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
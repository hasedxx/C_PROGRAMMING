#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n,c;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    c = n;
    for ( int i = 1; i<=n; i++)
    {
        for( int j = 1; j<=n; j++)
        {
            if (i==j || i+j==n+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
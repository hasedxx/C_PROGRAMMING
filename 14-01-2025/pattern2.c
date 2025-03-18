#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of rows of the triangle = ");
    scanf("%d", &n);

    int add = 1;
    for ( int i = 1; i<=n; i++)
    {
        for ( int j = 1; j<=i; j++ )
        {
            printf("%d ", add);
            add = add +2;
        }
        printf("\n");
    }
    return 0;
}
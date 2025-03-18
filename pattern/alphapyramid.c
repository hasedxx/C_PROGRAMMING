#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n, nst=1;
    printf("Enter the number of the lines\n");
    scanf("%d", &n);
    
    for ( int i = 1; i<=n; i++)
    {

        for ( int k = 1; k<=n-i; k++ )
        {
            printf(" ");
        }

        for ( int j = 1; j<=nst; j++)
        {
            int a = 65 + j-1;
            printf("%c", (char)a);
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}
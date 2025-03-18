#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n, nst = 1;
    printf("Enter the number od lines of the pyramid\n");
    scanf("%d",&n);

    for ( int i = 1; i<=n; i++ )
    {
        for ( int k = 1; k<=n-i; k++ )
        {
            printf(" ");
        }
        for ( int j = 1; j<=nst; j++ )
        {
            printf("%d",j);
        }
        nst = nst + 2;
        printf("\n");
    }
}
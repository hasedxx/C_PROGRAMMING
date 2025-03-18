#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahamd  590011772\n");
    int n, nst=1;
    printf("Enter the numebr of rows of the pyramind = ");
    scanf("%d", &n);

    for ( int i = 1; i<=n; i++ )
    {
        for ( int k = 1; k<=n-i; k++ )
        {
            printf(" ");
        }
        for ( int j = 1; j<=nst; j++ )
        {
            printf("* ");
        }
        nst = nst +1;
        printf("\n");

    }
    return 0;
}
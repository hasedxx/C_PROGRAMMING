#include <stdio.h>

int fac ( int x )
{
    int fac = 1;
    for( int i = 1; i<=x; i++)
    {
        fac = fac * i;
    }
    return fac;
}

int combination( int n, int r )
{
    int comb = fac(n)/(fac(r)*fac(n-r));
    return comb;
}

int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, r;
    printf("Enter the n \n");
    scanf("%d",&n);

    for ( int i = 0; i<=n; i++)
    {
        for ( int k = 1; k<=n-i; k++)
        {
            printf(" ");
        }

        for ( int j = 0; j<=i; j++)
        {
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        printf(" \n");
    }
    return 0;
}
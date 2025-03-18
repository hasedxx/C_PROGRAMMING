#include <stdio.h>
int fac( int x )
{
    int fac = 1;
    for ( int i = 1; i<=x; i++ )
    {
        fac = fac * i;
    }
    return fac;
}

int permutation( int n, int r )
{
    int per = fac(n)/(fac(n-r));
    return per;
}

int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, r;
    printf("Enter the n \n");
    scanf("%d",&n);
    printf("Enter the n \n");
    scanf("%d",&r);

    int result = permutation(n, r);
    printf("The result is = %d",result);
    return 0;
}
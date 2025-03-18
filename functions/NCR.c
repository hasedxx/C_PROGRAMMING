#include <stdio.h>

int fac(int x)
{
    int fac=1;
    for ( int i = 1; i <= x; i++)
    {
        fac = i * fac;
    }
    return fac;
}

int comb( int x, int y )
{
    int com = fac(x)/(fac(y)*fac(x-y));
    return com;
}

int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, r;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of r\n");
    scanf("%d",&r);
    int com = comb(n,r);
    printf("The result is %d",com);
}
#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n, fac = 1;
    printf("Enter the number \n");
    scanf("%d",&n);

    for ( int i = 1; i<=n; i++ )
    {
        for ( int j = 1; j<=i ; j++)
        {
            fac = fac * j;
        }
        printf("The factorial of the %d digit is %d\n", i,fac);
        fac = 1;
    }
    return 0;
}
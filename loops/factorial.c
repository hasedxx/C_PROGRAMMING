#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n, fac = 1;
    printf("Enter the number \n");
    scanf("%d",&n);

    for ( int i = 1; i<=n; i++ )
    {
        fac = fac * i;
    }
    printf("The factorial of the entered number is %d", fac);
    return 0;
}
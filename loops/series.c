#include <stdio.h>
int main ()
{
    printf("Naveul 590011772\n");
    int n, d, series = 0;
    printf("Enter the number of term of the series \n");
    scanf("%d", &n);

    for ( int i = 1; i<=n; i++)
    {
        if ( i % 2 == 0 )
        {
            d = -1 * i;
            series = series + d;
        }
        else 
        {
            series = series + i;
        }
    }
    printf("The sum of the series is %d", series);
    return 0;
}
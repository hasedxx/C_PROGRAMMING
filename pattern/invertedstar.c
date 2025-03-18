#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n,b;
    b=n;
    printf("Enter the number of rows of the star\n");
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        for (int j=0; j<=n-i; j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}
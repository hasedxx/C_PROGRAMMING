#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int n;
    printf("enter the no. of rows\n");
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        for ( int j=1; j<=n; j++)
        {
            if ( i==(n/2)+1 || j==(n/2)+1 )
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
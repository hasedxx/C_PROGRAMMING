#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int n, nst = 1;
    printf("Enter the number of lines\n");
    scanf("%d", &n);
    int spaces = n/2;
    int ml = n/2 + 1;

    for ( int i = 1; i<=n; i++)
    {
        for ( int k = 1; k<=spaces; k++ ) //spaces
        {
            printf(" ");
        }

        for (int j = 1; j<=nst; j++)  //stars
        {
            printf("*");
        }
        if ( i < ml )
        {
            spaces--;
            nst+=2;
        }
        else{
            spaces++;
            nst-=2;
        }
        printf("\n");
    }

}
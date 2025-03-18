#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, spc = 1;
    printf("Enter the number of rows = ");
    scanf("%d", &n);
    for( int i = 1; i<=2*n-1; i++ )
    {
        printf("%d", i);
    }
    printf("\n");

    for(int i = 1;i<=n;i++)
    {
        int a = 1;
        for( int j = 1; j<=n-i; j++)
        {
            printf("%d", a);
            a+=1;
        }

        for( int k = 1; k<=spc; k++)
        {
            printf(" ");
            a+=1;
        }


        for( int j = 1; j<=n-i; j++)
        {
            printf("%d", a);
            a+=1;
        }
        spc = spc+2;
        printf("\n");
    }
}
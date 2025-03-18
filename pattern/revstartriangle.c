#include <stdio.h> 
int main()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enter the number of lines\n");
    scanf("%d", &n);
    int spaces = 0;
    int stry = n;
    for ( int i = 1; i <= n; i++)
    {
        for ( int k = 1; k<=spaces; k++)
        {
            printf(" ");
        }

        for ( int j = 1; j<=stry ; j++ )
        {
            printf("*");
        }

        spaces++;
        stry--;
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int r, c, i, j;
    printf("Enter the number of Rows of the pattern\n");
    scanf("%d", &r);
    printf("Enter the number of column of the pattern\n");
    scanf("%d", &c);
    for (i = 1; i<=c; i++)
    {
        for ( j=1; j<=r; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
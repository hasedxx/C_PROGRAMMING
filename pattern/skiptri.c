#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enter the number of rows of the triangle\n");
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        int a=1;
        for ( int j=1; j<=i; j++)
        {
            printf("%d", a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}
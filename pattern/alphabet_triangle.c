#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n;
    printf("Enter the number of lines\n");
    scanf("%d", &n);

    for ( int i=1; i<=n; i++)
    {
        for ( int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        int a=1;
        for ( int k=1; k<=i; k++)
        {
            int d=a+64;
            char f=(char)d;
            printf("%c", f);
            a=a+1;
        }
        printf("\n");
    }
}
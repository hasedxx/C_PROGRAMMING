#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    int str = n-1;
    int spaces = 1;
    int a = 65;

    for ( int i = 1; i<=2*n-1; i++ )
    {
        printf("%c", (char)a);
        a++;
    }
    printf("\n");

    for ( int i = 1; i<=n; i++ )
    {
        int b = 65;
        for ( int j = 1; j<=str; j++)
        {
            printf("%c",(char)b);
            b++;
        }

        for ( int k = 1; k<=spaces; k++)
        {
            printf(" ");
            b++;
        }

        for ( int j = 1; j<=str; j++)
        {
            printf("%c",(char)b);
            b++;
        }

        str--;
        spaces+=2;
        b=65;
        printf("\n");

    }
    return 0;
}
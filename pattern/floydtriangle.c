#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int l, sum=1;
    printf("Enter the number of lines\n");
    scanf("%d", &l);
    for ( int i = 1; i<=l; i++)
    {
        for ( int j=1; j<=i; j++)
        {
            printf("%d ",sum);
            sum=sum+1;
        }
        printf("\n");
    }
    return 0;
}
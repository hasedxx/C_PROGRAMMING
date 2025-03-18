#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n, digi, sum, temp;
    printf("Enter the number upto checked\n");
    scanf("%d", &n);
    for ( int i = 1 ; i <= n; i++)
    {
        sum = 0;
        temp = i;
        while( temp > 0 )
        {
            digi = temp % 10;
            sum = sum + (digi*digi*digi);
            temp = temp/10;
        }
        if (sum==i)
        {
            printf("Amstrong number %d\n",i);
        }
    }
    return 0;
}
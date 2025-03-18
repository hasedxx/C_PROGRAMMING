#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int n, org, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &n);
    org = n;
    while ( n > 0 )
    {
        org = n % 10;
        sum = sum + org;
        n = n / 10;
    }
    printf("The sum of the digits of the number is %d", sum);
    return 0;

}
#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n, digi, rev=0;
    printf("Enter the number \n");
    scanf("%d", &n);

    while ( n > 0 )
    {
        digi = n % 10;
        rev = rev * 10 + digi;
        n = n / 10;
    }
    printf("The reversed number is %d", rev);
    
}
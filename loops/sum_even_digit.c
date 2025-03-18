#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int n, sum = 0 , digi;
    printf("Enter the number \n");
    scanf("%d", &n);
    
    while ( n > 0 )
    {
        digi = n % 10;
        if ( digi % 2 == 0 )
        {
            sum = sum + digi;
        }
        n = n / 10;
    }
    printf("The sum of the even digits of the number is %d \n", sum);
    return 0;
}
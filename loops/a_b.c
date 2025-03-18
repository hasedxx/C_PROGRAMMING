#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int a,b,pow = 1;
    printf("Enter the number \n");
    scanf("%d",&a);
    printf("Enter the power\n");
    scanf("%d",&b);

    for ( int i = 1; i<=b; i++)
    {
        pow = a * pow;
    }
    printf("The result is %d", pow);
    return 0;
}
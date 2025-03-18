#include <stdio.h>
int main ()
{
    printf("Navedul 590011772\n");
    int a, b, c;
    printf("Enter the first age\n");
    scanf("%d", &a);
    printf("Enter the second age\n");
    scanf("%d", &b);
    printf("Enter the third age\n");
    scanf("%d", &c);


    if ( a < b && a < c )
    {
        printf("The youngest is %d", a);
    }

    if ( b < a && b < c )
    {
        printf("The youngest is %d", b);
    }
    
    if ( c < a && c < b )
    {
        printf("The youngest is %d", c);
    }
    return 0;
}
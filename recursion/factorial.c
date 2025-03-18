#include <stdio.h>
int factorial( int a)
{
    if ( a==1 || a==0 )
    return 1;
    else
    return a*factorial(a-1);
}
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    int result = factorial(n);
    printf("The factorial of the number is = %d",result);
    return 0;
}
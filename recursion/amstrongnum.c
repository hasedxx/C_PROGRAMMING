#include <stdio.h>
int check(int num, int b)
{
    if( num == 0 )
    return b;

    b = num%10;
    b = b*b*b;
    return check(num/10,b);
}
int amst(int a)
{
    return a=check(a,0);
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number to be checked = ");
    scanf("%d", &n);
    int result = amst(n);
    if (result == 1)
    printf("The number is amstrong number \n");
    else
    printf("The number is not a amstrong number \n");
    return 0;
}
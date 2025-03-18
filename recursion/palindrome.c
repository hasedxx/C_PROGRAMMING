#include <stdio.h>
int revnum(int num, int new)
{
    if ( num == 0 )
    return new;

    new = (new*10) + (num%10);
    return revnum(num/10, new);
}
int ispali( int x )
{
    if ( x<0 )
    {
    x = -x;
    }

    return x = revnum(x,0);
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int a;
    printf("Enter the number to be checked = ");
    scanf("%d", &a);

    int result = ispali(a);
    if ( result == a )
    printf("True\n");
    else
    printf("False\n");
    return 0;
}
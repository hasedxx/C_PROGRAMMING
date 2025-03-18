#include <stdio.h>
int powerlog( int bs, int pw )
{
    if(pw==1)
    return bs;
    if ( pw%2==0 )
    {
        int x = powerlog(bs, pw/2);
        int powr = x * x;
        return powr;
    }
    else{
        int x = powerlog(bs, pw/2);
        int powr = x * x * bs;
        return powr;
    }
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int base, power;
    printf("Enter the base = ");
    scanf("%d", &base);
    printf("Enter the power = ");
    scanf("%d", &power);

    int result = powerlog(base, power);
    printf("The result = %d", result);
    return 0;
}
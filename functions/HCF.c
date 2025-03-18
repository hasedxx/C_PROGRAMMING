#include <stdio.h>
int min(int x, int y)
{
    if (x<y)
    return x;
    else
    return y;
}

int hcf( int a, int b)
{
    int value;
    for ( int i = min(a,b); i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            value = i;
            break;
        }
    }
    return value;
}

int main ()
{
    printf("Navedul hasan ahmad  590011772\n");
    int num1, num2;
    printf("Enter the first number \n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);

    int result = hcf(num1, num2);
    printf("The HCF is %d\n",result);
    return 0;
}
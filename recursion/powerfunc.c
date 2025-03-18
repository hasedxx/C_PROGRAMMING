#include <stdio.h>
int power (int x, int y)
{
    if (y==0)
    return 1;
    int pow = x*power(x,y-1);
    return pow;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int a,b;
    printf("Enter the number \n");
    scanf("%d", &a);
    printf("Enter the power \n");
    scanf("%d", &b);
    int result = power(a,b);
    printf("The result is = %d", result);
    return 0;
}
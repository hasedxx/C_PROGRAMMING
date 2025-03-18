#include <stdio.h>
int greatest(int x, int y)
{
    if ( x > y )
    return x;
    else
    return y;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num1, num2;
    printf("Enter the first number = ");
    scanf("%d",&num1);
    printf("Enter the second number = ");
    scanf("%d",&num2);
    int result = greatest(num1,num2);
    printf("The number between number is = %d",result);
    return 0;
}
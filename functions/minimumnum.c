#include <stdio.h>
int minimum(int x, int y)
{
    int min = x;
    if ( min > y )
    {
        min = y;
    }
    return min;
}

int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num1, num2;
    printf("Enter the first number \n");
    scanf("%d",&num1);
    printf("Enter the second number \n");
    scanf("%d", &num2);

    int result = minimum(num1,num2);

    printf("The minimum number is %d\n",result);
    return 0;
}
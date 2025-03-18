#include <stdio.h>
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int num1, num2;
    printf("Enter the first number \n");
    scanf("%d", &num1);

    printf("Enter the second number \n");
    scanf("%d", &num2);

    int x=add(num1,num2);
    printf("The sum of both the number is %d\n",x);
}
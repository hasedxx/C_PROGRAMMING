//Write a program to print the smallest number of two.
#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num1 ,  num2;
    printf("Enter the first number \n");
    scanf("%d", &num1);
    printf("Enter the second number \n");
    scanf("%d", &num2);

    if ( num1 > num2)
    {
        printf("Second number is smallest");
    }
    else 
    {
        printf("First number is smallest");
    }
    return 0;
}
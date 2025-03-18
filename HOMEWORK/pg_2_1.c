//Write a program to print the average of 3 numbers.
#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num1 , num2 , num3 , avg;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("Enter the third number\n");
    scanf("%d", &num3);

    avg = (num1 + num2 + num3) / 3;
    printf("The average of the three number is %d", avg);
    return 0;

}
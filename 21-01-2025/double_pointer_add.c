#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int x, y;
    printf("Enter the value of x = ");
    scanf("%d", &x);
    printf("Enter the value of y = ");
    scanf("%d", &y);

    int *p = &x;
    int *q = &y;

    int **dp = &p;
    int **dq = &q;

    int sum = **dp + **dq;
    printf("The sum of x and y = %d\n", sum);
    int sub = **dp - **dq;
    printf("The substraction of x and y = %d\n", sub);
    int mul = **dp * **dq;
    printf("The multiplication of x and y %d", mul);
    return 0;
}
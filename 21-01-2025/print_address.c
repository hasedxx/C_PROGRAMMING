#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int x = 5;
    int *p = &x;
    printf("The address of variable x is = %u",p);
    *p = 90;
    printf("The value of x after change = %d", *p);
    printf("The address of variable x = %d", &x);
    printf("The address of pointer p = %d", &p);
    return 0;
}
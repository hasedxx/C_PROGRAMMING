#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int x = 2;
    int *p = &x;
    int **q = &p;

    printf("The value using double pointer %d\n", **q);
    printf("Address of p pointer = %d\n", q);
    printf("The address of pointer p = %d", &p);
    return 0;
}
#include <stdio.h>
int main ()
{
    printf("Navedul  590011772\n");
    int n, i;
    printf("Enter the number of the which you want to print the table\n");
    scanf("%d", &n);
    for ( i = 1; i <=10; i++)
    {
        printf("%d\n", n*i);
    }
    return 0;
}
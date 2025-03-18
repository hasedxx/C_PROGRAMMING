//Take a number(n) from user & output its cube(n*n*n).
#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int num , cube;
    printf("Enter the number\n");
    scanf("%d", &num);
    cube = num * num * num;
    printf("The cube of the number %d is = %d", num, cube);
    return 0;
}
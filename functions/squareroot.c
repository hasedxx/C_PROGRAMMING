#include <stdio.h>
#include <math.h>

int root ( int x )
{
    int root = sqrt(x);
    return root;
}

int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);

    int result = root(num);
    printf("The square root of the number is %d\n",result);
    return 0;
}
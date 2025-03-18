#include <stdio.h>
int main()
{
    printf("Navedul 590011772\n");
    int n, tab;
    printf("Enter the number to be printed\n");
    scanf("%d",&n);
    int i = 1;
    while ( i <= 10 )
    {
        tab = n*i;
        printf("%d\n", tab);
        i++;
    }
    return 0;
}
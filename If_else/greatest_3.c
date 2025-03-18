#include <stdio.h>
int main()
{
    printf("Navedul 590011772\n");
    int n1, n2, n3;
    printf("Enter the three numbers\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1>n2 & n1>n3)
    {
        printf("%d is greatest", n1);
    }
    if (n2>n1 & n2>n3)
    {
        printf("%d is greatest", n2);
    }
    if (n3>n2 & n3>n1)
    {
        printf("%d is greatest", n1);
    }
    return 0;
}
#include <stdio.h>
int ways(int a)
{
    if (a==1 || a==2)
    return a;
    if (a==3)
    return 1;
    int totalways = ways(a-1) + ways(a-2) + ways(a-3);
    return totalways;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of stairs\n");
    scanf("%d",&n);
    int result = ways(n);
    printf("The number of ways are = %d", result);
    return 0;
}
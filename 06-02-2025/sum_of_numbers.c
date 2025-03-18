#include <stdio.h>
int sum(int a)
{
    if (a==0)
    return 0;
    int add = a + sum(a-1);
    return add;
}
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the no. of terms to added = ");
    scanf("%d", &n);
    int result = sum(n);
    printf("The sum of the numbers is = %d", result);
    return 0;
}
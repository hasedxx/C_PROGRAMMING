#include <stdio.h>
int sum(int a)
{
    if (a==0 || a==1 )
    return 1;
    int su = a + sum(a-1);
    return su;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    int result = sum(n);
    printf("The sum of the numbers is %d",result);
    return 0;
}
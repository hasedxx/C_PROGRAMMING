#include <stdio.h>
void num (int a)
{
    if (a==0)
    return;
    printf("%d",a);
    num(a-1);
    return;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the starting number\n");
    scanf("%d",&n);
    num(n);
}
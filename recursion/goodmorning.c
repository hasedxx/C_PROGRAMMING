#include <stdio.h>
void goodmorning(int a)
{
    if (a==0)
    return;
    printf("Good Morning\n");
    goodmorning(a-1);
}
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter number of times to be printed\n");
    scanf("%d",&n);
    goodmorning(n);
    return 0;
}
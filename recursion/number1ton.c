#include <stdio.h>
void num(int a, int b)
{
    if(a<b)
    printf("%d\n", a);
    num(a+1,b);
    return;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the ending number\n");
    scanf("%d",&n);
    num(1,n);
    return 0;
}
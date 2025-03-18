#include <stdio.h>
void incdec(int a)
{
    if (a==0)
    return;
    printf("%d\n",a);
    incdec(a-1);
    printf("%d\n",a);
    return;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    incdec(n);
    return 0;
}
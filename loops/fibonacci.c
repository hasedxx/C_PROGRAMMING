#include <stdio.h>
int main ()
{
    printf("navedul  590011772\n");
    int n, a=1, b=1,sum; 
    printf("Enter the number of terms of the series\n");
    scanf("%d",&n);

    for ( int i = 1; i<=n; i++ )
    {
        printf("%d",a);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}
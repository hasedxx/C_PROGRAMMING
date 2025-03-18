#include <stdio.h>
int main()
{
    printf("Navedul 590011772\n");
    int a, n ,d;
    printf("Enter the first term of the ap\n");
    scanf("%d", &a);
    printf("Enter the no of terms of the AP\n");
    scanf("%d", &n);
    printf("Enter the common differnce\n");
    scanf("%d", &d);
    for (a; a<=n; a=a+d)
    {
        printf("\n%d\n", a);
    }
    return 0;
}
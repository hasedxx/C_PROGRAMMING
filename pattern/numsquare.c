#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enter the side of the square\n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}
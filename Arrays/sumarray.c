#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad 590011772\n");
    int n, sum = 0;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i<n; i++ )
    {
        int a = i+1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<n; i++ )
    {
        sum = sum + arr[i];
    }

    printf("The sum of the elements is = %d", sum);
    return 0;
}
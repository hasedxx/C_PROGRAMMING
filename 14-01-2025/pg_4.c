#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad    590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);

    int arr[n], a, sum= 0;

    for ( int i = 0; i<n; i++ )
    {
        a = i+1;
        printf("Enter the %d number = ", a);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of all the elements of the array is = %d", sum);
    return 0;
}
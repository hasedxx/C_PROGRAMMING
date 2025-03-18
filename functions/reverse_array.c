#include <stdio.h>
void reverse(int a[], int n)
{
    for( int i = 0; i<n/2; i++ )
    {
        a[i] = a[i] + a[n-i-1];
        a[n-i-1] = a[i] - a[n-i-1];
        a[i] = a[i] - a[n-i-1];
    }
    for( int i = 0; i<n; i++ )
    {
        printf("%d element of the array after reverse is = %d\n", i+1,a[i]);
    }
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);

    int arr[n];
    for( int i = 0; i<n; i++ )
    {
        int a = i+1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);
}
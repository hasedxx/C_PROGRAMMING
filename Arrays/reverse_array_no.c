#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);

    int arr[n];
    for( int i = 0; i<n; i++ )
    {
        int a = i + 1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }

    for ( int i = 0; i<n/2; i++ ){
        arr[i] = arr[i] + arr[n-i-1];
        arr[n-i-1] = arr[i] - arr[n-i-1];
        arr[i] = arr[i] - arr[n-i-1];
    }

    for( int i = 0; i<n; i++ )
    {
        int a = i+1;
        printf("%d element of the array after reverse is = %d\n",a,arr[i]);
    }
    return 0;
}
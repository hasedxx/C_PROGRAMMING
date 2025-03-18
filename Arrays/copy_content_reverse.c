#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    
    int arr[n];
    for ( int i = 0; i<n; i++ )
    {
        int a = i + 1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }

    int sarr[n];

    for( int i = 0; i<n; i++ )
    {
        sarr[i] = arr[n-1-i];
        printf("The reversed element are = %d\n", sarr[i]);
    }

    return 0;

    
}
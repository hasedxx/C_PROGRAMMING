#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of element of the array = ");
    scanf("%d", &n);

    int arr[n];

    for( int i = 0; i<n; i++ )
    {
        int a = i + 1;
        printf("Enter the %d element of the array = ", a );
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for ( int i = 0; i<n; i++ )
    {
        if ( arr[i] > max )
        max = arr[i];
    }
    int smax = arr[0];

    for ( int i = 0; i<n; i++ )
    {
        if (arr[i]!= max && arr[i]>smax )
        smax = arr[i];
    }

    printf("The second largest element of the array is = %d", smax);
    return 0;
}
#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int n;
    printf("Enter the number of element of the array = ");
    scanf("%d", &n);

    int arr[n], a;
    for( int i = 0; i<n; i++ )
    {
        a = i + 1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }

    for( int i = 0; i<n; i++ )
    {
        if( i%2==0 )
        {
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }

    for( int i = 0; i<n ; i++ )
    {
        a = i + 1;
        printf("After updatation the %d element of the array is = %d",a,arr[i]);
    }

    return 0;
}
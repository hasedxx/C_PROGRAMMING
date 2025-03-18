#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i<n; i++ )
    {
        printf("Enter the %d element of the array = ",i);
        scanf("%d", &arr[i]);
    }

    for ( int i = 0; i<n; i++ )
    {
        printf("The %d element of the array is %d\n",i, arr[i]);
    }

    return 0;
}
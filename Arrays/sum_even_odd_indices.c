#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);

    int arr[n], sum_even = 0, sum_odd = 0;
    for( int i = 0; i<n; i++ )
    {
        int a = i + 1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }

    for( int i = 0; i<n; i++ )
    {
        if( i%2==0 )
        {
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }

    int diff = sum_even - sum_odd;
    printf("The difference = %d", diff);
    return 0;
}
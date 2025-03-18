//Find sum of all array elements using recursion.

#include <stdio.h>
int sum( int a[], int num )
{
    if(num == 0)
    return 0;
    int add = 0;
    add = a[num - 1] + sum(a, num - 1);
    return add;
}
int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int n;
    printf("Enter the number of elements of array = ");
    scanf("%d", &n);

    int arr[n];

    for( int i = 0; i<n; i++ )
    {
        printf("Enter the %d element of array = ", i+1);
        scanf("%d", &arr[i]);
    }

    int result = sum(arr, n);
    printf("The sum of all the elements of the array = %d", result);
    return 0;
}
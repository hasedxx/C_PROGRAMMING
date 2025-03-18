#include<stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    int arr[n];

    for( int i = 0; i<n; i++ )
    {
        int a = i + 1;
        printf("Enter the %d element of the array = ",a);
        scanf("%d", &arr[i]);
    }
    int x;

    printf("Enter the value of x = ");
    scanf("%d", &x);
    int num = 0;

    for( int i = 0; i<n ; i++ )
    {
        for( int j = i+1; j<n; j++ )
        {
            if ( i!=j )
            {
                int sum = arr[i] + arr[j];
                if ( sum == x )
                num += 1;
            }
        }
    }

    printf("The number of pairs that add up to %d = %d", x, num);
    return 0;
}
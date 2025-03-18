#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of array = ");
    scanf("%d", &n);

    int arr[n];
    

    for ( int i = 0; i<n; i++ )
    {
        int a = i+1;
        printf("Enter the %d element of the array = ",a);
        scanf("%d", &arr[i]);
    }

    
    for ( int i = 0; i<n ; i++ )
    {
        
        arr[i] = arr[a];
    }

    for( int i = 0; i<n; i++ ){
        printf("%d", arr[i]);
    }

    return 0;
}
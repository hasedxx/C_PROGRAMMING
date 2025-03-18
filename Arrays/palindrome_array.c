#include <stdio.h>
void pali(int a[], int n)
{
    for( int i = 0; i<n; i++ )
    {
        int j = n - i - 1;
        if( a[i] != a[j] )
        {
        printf("Not a palindrome array");
        return;
        }
    }
    printf("The array is palindrone");
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n,a = 0;
    printf("Enter the number of element of the array =" );
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i<n; i++ )
    {
        printf("Enter the %d element of the array = ", i+1);
        scanf("%d", &arr[i]);
    }

    pali(arr, n);
    return 0;

    
}
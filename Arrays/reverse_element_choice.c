#include <stdio.h>
void reverse( int a[], int st, int ed )
{
    for( int i = st, j = ed; i<j; i++, j-- )
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return ;
}
int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i<n; i++ ){
        printf("Enter the %d element of the array = ", i+1);
        scanf("%d", &arr[i]);
    }
    int st, ed;
    printf("Enter the start element and ending element to be reversed = ");
    scanf("%d%d", &st, &ed);

    reverse(arr,st-1,ed-1);
    for( int i = 0; i<n; i++ )
    {
        printf("After reverse the %d element of the array = %d\n", i+1,arr[i]);
    }
    return 0;
}
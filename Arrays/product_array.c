#include <stdio.h>

int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n, pro = 1;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    int arr[n];
    for ( int i = 0; i<n; i++ )
    {
        int a = i + 1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
        pro = pro * arr[i];
    }
    printf("The product is = %d", pro);
    return 0;

}
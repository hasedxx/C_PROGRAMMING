#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);


    int arr[n], a;
    for( int i = 0; i<n; i++ )
    {
        a = i+1;
        printf("Enter the %d element of the array = ", a);
        scanf("%d", &arr[i]);
    }
    int choice, count = 0;

    printf("Enter the number to be searched = ");
    scanf("%d", &choice);

    for ( int i = 0; i<n; i++ )
    {
        if ( arr[i] > choice )
        count += 1;
    }

    printf("The numbers greater than %d = %d",choice,count);
    return 0;
}
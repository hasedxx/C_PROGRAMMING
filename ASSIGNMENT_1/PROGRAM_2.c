//Create an array ‘a1’ with ‘n’ elements. 
//Insert an element in i th position of ‘a1’ 
//and also delete an element from j th position of ‘a1’
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
        printf("Enter the %d element of the array = ", i+1);
        scanf("%d", &arr[i]);
    }

    int in, dl;
    printf("Enter the index of element where you want to replace = ");
    scanf("%d", &in);

    printf("Enter the index of element which you want to delete = ");
    scanf("%d", &dl);

    for( int i = 0; i<n; i++ )
    {
        if ( i == in )
        {
            int a;
            printf("Enter what you want to replace = ");
            scanf("%d", &a);
            arr[i] = a;
        }

        if ( i == dl )
        {
            arr[i] = arr[i+1];
        }
    }

    printf("The array after alteration is =\n");
    for ( int i = 0; i<n; i++ )
    {
        printf("%d\n", arr[i]);
    }
    return 0;

}
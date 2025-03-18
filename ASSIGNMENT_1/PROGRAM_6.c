/*Store ‘n’ numbers (integers or real) in an array.  
Conduct a linear search for a given number and report 
success or failure in the form of a suitable message.*/
#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);

    int arr[n];
    for( int i = 0; i<n; i++ )
    {
        printf("Enter the %d element of the array = ",i+1);
        scanf("%d", &arr[i]);
    }

    int choice;
    printf("Enter the element to be searched = ");
    scanf("%d", &choice);
    int a = 0;

    for( int i = 0; i<n; i++ )
    {
        if (arr[i] == choice )
        {
            a += 1;
        }
    }

    if( a>0 )
    {
        printf("Found successfully");
    }
    else {
        printf("Not Found");
    }
    return 0;
}
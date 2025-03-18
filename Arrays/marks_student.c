#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of students = ");
    scanf("%d", &n);

    int arr[n];

    for ( int i = 0; i<n; i++ )
    {
        int a = i+1;
        printf("Enter the %d student marks ", a);
        scanf("%d", &arr[i]);
    }

    for ( int i = 0; i<n; i++ )
    {
        if (arr[i]<=35)
        printf("The roll number of the failed student is %d",i+1);
    }

    return 0;
}
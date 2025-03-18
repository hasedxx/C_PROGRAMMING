#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the size of the matrix = ");
    scanf("%d", &n);

    int A[n][n];
    int B[n][n];
    int sum[n][n];

    for ( int i = 0; i<n; i++)
    {
        for ( int j = 0; j<n; j++)
        {
            printf("Enter the %d%d element of the matrix A = ",i,j);
            scanf("%d", &A[i][j]);
        }

    }

    for ( int i = 0; i<n; i++)
    {
        for ( int j = 0; j<n; j++)
        {
            printf("Enter the %d%d element of the matrix B = ",i,j);
            scanf("%d", &B[i][j]);
        }

    }

    for ( int i = 0; i<n; i++)
    {
        for ( int j = 0; j<n; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
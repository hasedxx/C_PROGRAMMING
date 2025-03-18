#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int r1, c1, r2,c2;
    printf("Enter the number of rows of first matrix = ");
    scanf("%d", &r1);
    printf("Enter the column of first matrix = ");
    scanf("%d", &c1);
    printf("Enter the number of rows of second matrix = ");
    scanf("%d", &r2);
    printf("Enter the column of second matrix = ");
    scanf("%d", &c2);

    int A[r1][c1];
    int B[r2][c2];

    if ( c1 == r1 )
    {
        int C[r1][c2];
        for( int i = 1; i<=r1; i++ )
        {
            for( int j = 1; j<=c1; j++ )
            {
                printf("Enter the %d%d element of the matrix A = ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        for( int i = 1; i<=r2; i++ )
        {
            for( int j = 1; j<=c2; j++ )
            {
                printf("Enter the %d%d element of the matrix B = ", i, j);
                scanf("%d", &B[i][j]);
            }
        }

        for( int i = 1; i<=r1; i++ )
        {
            for( int j = 1; j <= c2 ; j++ )
            {
                int sum = 0;
                for( int k = 1; k<=c2; k++ )
                {
                    sum += A[i][k] * B[k][j];
                    C[i][j] = sum;
                }
            }
        }
        for( int i = 1; i<=r1; i++ )
        {
            for( int j = 1; j<=c2; j++ )
            {
                printf("The %d%d element after multiplication is = %d\n", i,j, C[i][j]);
            }
        }
    }
    else{
        printf("Multiplication cannot be done");
    }
    return 0;
}
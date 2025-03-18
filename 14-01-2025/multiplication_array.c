#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int r1, c1, r2, c2;
    printf("Enter the rows of matrix A = ");
    scanf("%d", &r1);
    printf("Enter the column of matrix A = ");
    scanf("%d", &c1);
    printf("Enter the rows of matrix B = ");
    scanf("%d", &r2);
    printf("Enter the column of matrix B = ");
    scanf("%d", &c2);

    if( c1 == r2 )
    {
        int A[r1][c1];
        int B[r2][c2];
        int mul[r1][c2];

        //elements for A matrix
        for ( int i = 0; i<r1; i++)
        {
            for ( int j = 0; j<c1; j++)
            {
                printf("Enter the %d%d element of the matrix A = ",i,j);
                scanf("%d", &A[i][j]);
                }
        }

        //elements for B matrix
        for ( int i = 0; i<r2; i++)
        {
            for ( int j = 0; j<c2; j++)
            {
                printf("Enter the %d%d element of the matrix B = ",i,j);
                scanf("%d", &B[i][j]);
            }
        }

        for( int i = 0; i<r1; i++ )
        {
            for( int j = 0; j<c2; j++ )
            {
                int sum = 0;
                for( int k = 0; k<c2; k++ )
                {
                    sum+= A[i][k] * B[k][j];
                    mul[i][j] = sum;
                }
            }
        }
        printf("The elements of new matrix = \n");
        for( int i = 0; i<r1; i++ )
        {
            for( int j = 0; j<c2; j++ )
            {
                printf("%d   ", mul[i][j]);
            }
            printf("\n");
        }
    }
    if( c1!=r2 ){
        printf("Multiplication cannot be done\n");
    }
    



    
    return 0;
}


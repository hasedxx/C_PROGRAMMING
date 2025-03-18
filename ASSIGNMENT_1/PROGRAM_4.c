/*Find the sum of rows and
 columns of matrix of given order (row x column).*/

 #include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int row, col;
    printf("Enter the number of rows of the matrix = ");
    scanf("%d", &row);
    printf("Enter the number of column of the matrix = ");
    scanf("%d", &col);

    int max[row][col];

    for( int i = 1; i<=row; i++ )
    {
        for( int j = 1; j<=col; j++ )
        {
            printf("Enter the %d%d element of the matrix = ", i,j);
            scanf("%d", &max[i][j]);
        }
    }

    //To add all the element of the row of the matrix
    for( int i = 1; i<=row; i++ )
    {
        int row_sum = 0;
        for( int j = 1; j<=col; j++ )
        {
            row_sum += max[i][j];
        }
        printf("The sum of %d row of the matrix is = %d\n", i,row_sum);
    }

    //To add all the element of the column of the matrix
    for( int i = 1; i<=col; i++ )
    {
        int col_sum = 0;
        for( int j = 1; j<=row; j++ )
        {
            col_sum += max[j][i];
        }
        printf("The sum of %d column of the matrix is = %d\n", i,col_sum);
    }

    return 0;
}
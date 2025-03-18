#include <stdio.h>
int main()
{
    printf("navedul  590011772\n");
    int i, mat_1[3][3], mat_2[3][3], sum[3][3], j;
    printf("Enter the elements of the first matrix\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Element[%d][%d]\n", i+1, j+1);
            scanf("%d", &mat_1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Element[%d][%d]\n", i+1, j+1);
            scanf("%d", &mat_2[i][j]);
        }
    }

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum[i][j]= mat_1[i][j] + mat_2[i][j];
        }
    }


    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter the number of rows of first matrix = ");
    scanf("%d", &r1);
    printf("Enter the columns of first matrix = ");
    scanf("%d", &c1);
    printf("Enter the number of rows of second matrix = ");
    scanf("%d", &r2);
    printf("Enter the columns of second matrix = ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Multiplication cannot be done\n");
        return 0;
    }
    
    int A[r1][c1], B[r2][c2], C[r1][c2];
    
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", (*(A + i) + j));
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", (*(B + i) + j));
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(*(C + i) + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(*(C + i) + j) += (*(*(A + i) + k)) * (*(*(B + k) + j));
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(*(C + i) + j));
        }
        printf("\n");
    }

    return 0;
}

//Transpose Arrays Matrix
#include <stdio.h>
int main() {
    int r;
    printf("Enter values of r = ");
    scanf("%d", &r);

    int c;
    printf("Enter values of c = ");
    scanf("%d", &c);

    int A[r][c];
    printf("Enter elements of A = \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // Fixed: show element position
            printf("A = ", i, j);
            // Fixed: removed space after %d
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nOriginal Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Transpose logic
    int B[c][r];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // Fixed: assign transposed values
            B[j][i] = A[i][j];
        }
    }

    printf("\nTranspose of Matrix A (B):\n");
    // Fixed: loop order and printing
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
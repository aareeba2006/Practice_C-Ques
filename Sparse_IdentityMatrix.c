#include <stdio.h>

// Create Identity Matrix
void createIdentityMatrix(int matrix[100][100], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = (i == j) ? 1 : 0;
}

// Create Sparse Matrix with exactly ~67% zeros
void createSparseMatrix(int matrix[100][100], int rows, int cols) {
    int total = rows * cols;
    int non_zero = (total * 33 + 99) / 100; // Round up to ensure at least 33% non-zero

    // Initialize all elements to 0
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = 0;

    // Fill non-zero elements row-wise with 1
    for (int i = 0; i < rows && non_zero > 0; i++) {
        for (int j = 0; j < cols && non_zero > 0; j++) {
            matrix[i][j] = 1;
            non_zero--;
        }
    }
}

// Display Matrix
void displayMatrix(int matrix[100][100], int rows, int cols) {
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    char choice;
    int matrix[100][100];
    int rows, cols, n;

    printf("MATRIX CALCULATOR PROGRAM\n");
    printf("Enter matrix type:\n");
    printf("  I or i - Identity Matrix\n");
    printf("  S or s - Sparse Matrix\n");
    printf("Your choice: ");
    scanf(" %c", &choice);

    if (choice == 'I' || choice == 'i') {
        printf("Enter size (n): ");
        scanf("%d", &n);
        // if (n <= 0 || n > 100) {
        //     printf("Error: Size must be 1-100!\n");
        //     return 1;
        // }
        createIdentityMatrix(matrix, n);
        displayMatrix(matrix, n, n);
    } 
    else if (choice == 'S' || choice == 's') {
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of columns: ");
        scanf("%d", &cols);
        // if (rows <= 0 || rows > 100 || cols <= 0 || cols > 100) {
        //     printf("Error: Rows and columns must be 1-100!\n");
        //     return 1;
        // }
        createSparseMatrix(matrix, rows, cols);
        displayMatrix(matrix, rows, cols);
    } 
    else {
        printf("Invalid choice! Enter I or S.\n");
        return 1;
    }

    printf("\nProgram completed successfully!\n");
    return 0;
}

#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int matrix[ROWS][COLS], int transposedMatrix[COLS][ROWS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposedMatrix[COLS][ROWS];

    printf("Original Matrix:\n");
    printMatrix(matrix);

    transposeMatrix(matrix, transposedMatrix);

    printf("\nTransposed Matrix:\n");
    printMatrix(transposedMatrix);

    return 0;
}

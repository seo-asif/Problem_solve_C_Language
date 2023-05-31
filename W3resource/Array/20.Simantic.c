#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
                printf("\n Elements %d column of row %d: ",j+1,i+1);

            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int symmetric = 1; // Assume symmetric initially

    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n && symmetric; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0; // Not symmetric
            }
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}



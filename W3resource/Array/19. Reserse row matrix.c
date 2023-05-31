#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
    printf("\nElements %d column(n) of %d row(m):",j+1,i+1);
    scanf("%d", &matrix[i][j]);
        }
    }

    // Reverse the matrix
    for (int j = 0; j < n / 2; j++) {
    for (int i = 0; i < m; i++) {

    // Swap elements at j and n-1-j columns
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][(n - 1) - j];
            matrix[i][n - 1 - j] = temp;
        }
    }

    // Display the reversed matrix
    printf("Reversed matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

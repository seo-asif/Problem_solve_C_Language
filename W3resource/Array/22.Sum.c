#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the row of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the column of the square matrix: ");
    scanf("%d", &m);

    int matrix[n][m];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
                printf("\n Elements %d column of row %d: ",j+1,i+1);

            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int sum = 0; // Assume symmetric initially

    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m ; j++) {
            sum+=matrix[i][j];
        }
    }


        printf("\nThe output is %d\n", sum);


    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    printf("Size of Square Matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    int primary = 0, secondary = 0;

    // Input matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate diagonals
    for (i = 0; i < n; i++) {
        primary += matrix[i][i];
        secondary += matrix[i][n - i - 1];
    }

    printf("%d\n", abs(primary - secondary));
    return 0;
}
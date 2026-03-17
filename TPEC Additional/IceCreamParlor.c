#include <stdio.h>

int main() {
    int m = 5, n = 4, i, j; // m => total money
    int arr[4] = {1, 4, 5, 3}; // Example costs for 4 flavors

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == m) {
                printf("%d %d\n", i + 1, j + 1); // 1-based index
            }
        }
    }
}
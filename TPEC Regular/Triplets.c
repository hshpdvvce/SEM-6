#include <stdio.h>

// User-defined function to compare triplets
void compareTriplets(int a[3], int b[3], int result[2]) {
    result[0] = 0; // Alice's score
    result[1] = 0; // Bob's score
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            result[0]++;
        else if (a[i] < b[i])
            result[1]++;
        // If equal, no points
    }
}

int main() {
    int a[3], b[3], result[2];

    // Input Alice's scores
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    // Input Bob's scores
    for (int i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    // Call the function
    compareTriplets(a, b, result);

    // Output the result
    printf("%d %d\n", result[0], result[1]);

    return 0;
}
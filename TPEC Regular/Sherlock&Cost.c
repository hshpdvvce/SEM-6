#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { return a > b ? a : b; }

int main() {
    int n, i;
    scanf("%d", &n);
    int B[n];
    for (i = 0; i < n; i++)
        scanf("%d", &B[i]);

    int low = 0, high = 0; // low: A[i]=1, high: A[i]=B[i]

    for (i = 1; i < n; i++) {
        int low_next = max(low, high + abs(1 - B[i-1]));
        int high_next = max(low + abs(B[i] - 1), high + abs(B[i] - B[i-1]));
        low = low_next;
        high = high_next;
    }

    printf("%d\n", max(low, high));
}
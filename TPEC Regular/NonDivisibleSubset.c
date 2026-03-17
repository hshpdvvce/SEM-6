#include <stdio.h>

int main() {
    int n, k, i, rem;
    scanf("%d %d", &n, &k);
    int arr[n], freq[k];
    for (i = 0; i < k; i++) freq[i] = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i] % k]++;
    }

    int result = 0;
    // Only one element with remainder 0
    if (freq[0] > 0) result++;

    // For each pair of remainders, pick the larger group
    for (i = 1; i <= k/2; i++) {
        if (i != k - i)
            result += freq[i] > freq[k - i] ? freq[i] : freq[k - i];
    }

    // If k is even, only one element with remainder k/2
    if (k % 2 == 0 && freq[k/2] > 0)
        result++;

    printf("%d\n", result);
}
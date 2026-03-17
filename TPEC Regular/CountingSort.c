#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n); // Number of elements
    int arr[n];
    int freq[10] = {0}; // Assuming values are in range 0-10

    // Read input array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    // Print frequency array
    for (i = 0; i < n; i++)
        printf("%d ", freq[i]);
    printf("\n");

    return 0;
}
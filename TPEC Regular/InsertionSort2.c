// Proper fully implemented insertion sort for ANY array

#include <stdio.h>

int main() {
    int n, i, j, key;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        // Print the array after each insertion
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
    }
}
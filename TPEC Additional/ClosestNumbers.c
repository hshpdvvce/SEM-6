#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i, minDiff;
    printf("Size of Array: ");
    scanf("%d", &n);
    int arr[1000]; // assuming n <= 1000
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, n);

    minDiff = arr[1] - arr[0];
    for (i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < minDiff)
            minDiff = diff;
    }

    for (i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] == minDiff)
            printf("(%d %d) ", arr[i - 1], arr[i]);
    }
    return 0;
}
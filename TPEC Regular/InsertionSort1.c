/*

You are given an array that is almost sorted except for the last element.
Your task is to insert the last element into its correct position in the sorted part of the array, shifting elements as needed, and print the array after each shift.

*/

#include <stdio.h>

int main() {
    int n, i, j, key;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    key = arr[n - 1];
    j = n - 2;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
        j--;
    }
    arr[j + 1] = key;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
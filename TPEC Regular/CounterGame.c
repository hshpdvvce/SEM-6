#include <stdio.h>

int main() {
    unsigned long n;
    int moves = 0;
    scanf("%lu", &n);

    while (n > 1) {
        // Find the largest power of 2 less than or equal to n
        unsigned long p = 1;
        while (p * 2 <= n)
            p *= 2;

        if (n == p)
            n /= 2;
        else
            n -= p;

        moves++;
    }

    if (moves % 2 == 1)
        printf("Louise\n");
    else
        printf("Richard\n");
}
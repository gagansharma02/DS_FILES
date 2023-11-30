#include <stdio.h>

void generateFibonacci(int n) {
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return;
    }

    // Create a direct address table to store Fibonacci numbers
    long long fibTable[n];

    // Initialize the first two numbers in the series
    fibTable[0] = 0;
    if (n > 1) {
        fibTable[1] = 1;
    }

    // Generate the Fibonacci series
    for (int i = 2; i < n; i++) {
        fibTable[i] = fibTable[i - 1] + fibTable[i - 2];
    }

    // Print the Fibonacci series
    printf("Fibonacci Series (First %d numbers):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%lld\t", fibTable[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers you want to generate: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}

//Write a C program to calculate the permutation (nPr) and combination (nCr) of two given integers

#include <stdio.h>


unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter two integers n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r || r < 0) {
        printf("Invalid input! Ensure that n >= r and r >= 0.\n");
        return 1;
    }

    printf("Permutation of %dP%d = %llu\n", n, r, permutation(n, r));
    printf("Combination of %dC%d = %llu\n", n, r, combination(n, r));

    return 0;
}
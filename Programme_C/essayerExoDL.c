#include <stdio.h>
#include <math.h>

// Calculate power
double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Calculate nCr
double nCr(int n, int r) {
    if (r > n) {
        return 0;
    }
    if (r == 0 || r == n) {
        return 1;
    }
    if (2 * r > n) {
        return nCr(n, n - r);
    }
    return (power(n - r + 1, r) / power(n - r + 1, n - r));
}

// Calculate cos limit
double cosLimit(int n) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += power(-1, i) * nCr(2 * n, 2 * i) / power(2, n);
    }
    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Cos limit is: %.15lf\n", cosLimit(n));
    return 0;
}
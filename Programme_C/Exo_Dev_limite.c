#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

float fonc_fact(int n) {
    float result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

float fonc_dev_n(float x1, int n){
    float result1 = 1;
    int n1 = 0;
    int signe = -1;
    float term = 1;
    for (int i = 2; i <= n; i+=2) {
        // term *= ((-x1 * x1) / (2 * i)) / ((2*i) - 1);
        term = term * ((-x1 * x1) / ((n1)*(n1-1)));
        
        n1 = n1 + 2;
        
        result1 = result1 + signe * term;
        signe = -signe;
    }
    return result1;
}

float DL_cos(float x, int n) {
    float result = 1;
    float signe = 1;
    for (int i = 2; i <= n; i += 2) {
        result += (signe * pow(x, i)) / fonc_fact(i);
        signe = -signe;
    }
    return result;
}

int main() {
    float x = 2;
    int n = 4;
    float factoriel = fonc_fact(n);

    if (factoriel != -1) {
        printf("Le factoriel est : %.10f\n", factoriel);
    }
    printf("1ere meto << cos(%.6f) = %.6f>>\n", x, DL_cos(x, n));

    float x2 = 2;
    int n2 = 4;
    float factoriel2 = fonc_fact(n2);

    if (factoriel2 != -1) {
        printf("Le factoriel est : %.10f\n", factoriel2);
    }
    printf("2eme meto << cos(%.6f) = %.6f >>\n", x, fonc_dev_n(x2, n2));

    return 0;
}

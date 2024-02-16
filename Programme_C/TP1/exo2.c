#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {

    // // Exercice 2
    int R = 20;
    float D, P, S;

    D = 2 * R;
    P = 2 * PI * R;
    S = PI * R * R;

    printf("Diametre : %f\n", D);
    printf("Perimetre : %f\n", P);
    printf("Surface : %f\n", S);
    
    return 0;
}

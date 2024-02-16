#include<stdio.h>

void echange(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    printf("Exo 1:\r\n");
    int a = 5, b = 6;
    printf("Avant a = %d, b = %d\n", a, b);
    echange(&a, &b);
    printf("Apres a = %d, b = %d\n", a, b);

    return 0;
}

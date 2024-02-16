#include<stdio.h>

#define taille 10

/*
*P+2 
*(P+2) 
&P+1 
&A[4]-3 
A+3 
&A[7]-P 
P+(*P-10) 
*(P+*(P+8)-A[7]) 
*/


int main() {
    printf("Exo 2:\r\n");

    int A[taille] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int *P, *Res;

    P = A;
    Res = *P+2;
    printf("*P+2 = %d\n", Res);

    Res = *(P+2);
    printf("*(P+2) = %d\n", Res);

    Res = &P+1;
    printf("&P+1 = %d\n", Res);

    Res = &A[4]-3;
    printf("&A[4]-3 = %d\n", Res);

    Res = A+3;
    printf("A+3 = %d\n", Res);

    Res = &A[7]-P;
    printf("&A[7]-P = %d\n", Res);

    Res = P+(*P-10);
    printf("P+(*P-10) = %d\n", Res);

    Res = *(P+*(P + 8)-A[7]);
    printf("*(P+*(P+8)-A[7]) = %d\n", Res);

    return 0;
}

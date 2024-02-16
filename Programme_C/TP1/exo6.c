#include <stdio.h>
#include <math.h>


int main() {

    //Exo 6
    /*oC = 5/9x(oF -32) */
    int fahrenheit = 0;
    printf("\nBoucle for() :\n");
    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 10) {
        float celsius = (0.55) * (fahrenheit - 32);
        printf("%3d°F\t%6.1f°C\n", fahrenheit, celsius);
    }
    printf("\nBoucle while() :\n");
    int fahrenheit1 = 0;
    while (fahrenheit1 <= 300) {
        float celsius1 = (0.55) * (fahrenheit1 - 32);
        printf("%3d °F\t%6.1f°C\n", fahrenheit1, celsius1);
        fahrenheit1 += 10;
    }
    printf("\nBoucle do-while() :\n");

    int fahrenheit2 = 0;
    do {
        float celsius2 = (0.55) * (fahrenheit2 - 32);
        printf("%3d°F\t%6.1f°C\n", fahrenheit2, celsius2);
        fahrenheit2 += 10;
    } while (fahrenheit2 <= 300);

    

    return 0;
}

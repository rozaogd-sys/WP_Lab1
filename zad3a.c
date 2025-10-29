#include <stdio.h>
#include <stdbool.h>

int main() {
    float temperatura, wynik;
    char kierunek;

    printf("Podaj wartosc temperatury:");
    scanf("%f", &temperatura);

    printf("Wpisz znak kierunku:");
    scanf ("%c", &kierunek);

    if (kierunek=='C') {
        wynik = temperatura * 1,8 + 32;
    printf("%f C, wynik, kierunek");
    }

    if (kierunek=='F') {
        wynik = ( temperatura - 32) / 1,8;
    printf("%f F, wynik, kierunek");
    }

    else {
        printf("Podaj skale w C lub F:");
    }

    return 0;

    }



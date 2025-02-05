#include <stdio.h>

int main() {
    char cadena[] = "Copilot";
    char *p;
    int longitud = 0;

    // Usar puntero para recorrer la cadena y calcular su longitud//
    for (p = cadena; *p != '\0'; p++) {
        longitud++;
    }

    printf("La longitud de la cadena \"%s\" es: %d\n", cadena, longitud);

    // Usar puntero para imprimir la cadena al revés//
    printf("La cadena al revés es: ");
    for (p = cadena + longitud - 1; p >= cadena; p--) {
        putchar(*p);
    }
    printf("\n");

    return 0;
}

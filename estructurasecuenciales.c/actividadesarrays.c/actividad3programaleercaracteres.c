#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int longitud;

    // Leer la cadena de caracteres//
    printf("Introduce una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el carácter de nueva línea al final si existe//
    cadena[strcspn(cadena, "\n")] = '\0';

    // Calcular la longitud de la cadena//
    longitud = strlen(cadena);
    printf("La cadena tiene %d caracteres.\n", longitud);

    // Imprimir la cadena al revés//
    printf("La cadena al revés es: ");
    for (int i = longitud - 1; i >= 0; i--) {
        putchar(cadena[i]);
    }
    printf("\n");

    return 0;
}

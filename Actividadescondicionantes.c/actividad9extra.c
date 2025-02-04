#include <stdio.h>

int main() {
    char caracter;

    // Solicitar al usuario que introduzca 'S' o 'N'//
    printf("Introduce el caracter 'S' o 'N': ");
    scanf(" %c", &caracter);

    // Validar la entrada del usuario//
    while (caracter != 'S' && caracter != 'N') {
        printf("Entrada inválida. Por favor, introduce 'S' o 'N': ");
        scanf(" %c", &caracter);
    }

    // Mostrar el carácter válido introducido//
    printf("Has introducido el carácter válido: %c\n", caracter);

    return 0;
}

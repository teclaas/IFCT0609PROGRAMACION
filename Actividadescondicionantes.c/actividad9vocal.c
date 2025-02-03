#include <stdio.h>

int main() {
    char letra;

    // Solicitar una letra al usuario
    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    // Convertir la letra a minúscula para simplificar la comparación
    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + ('a' - 'A');
    }

    // Comprobar si la letra es una vocal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("La letra '%c' es una vocal.\n", letra);
    } else {
        printf("La letra '%c' no es una vocal.\n", letra);
    }

    return 0;
}

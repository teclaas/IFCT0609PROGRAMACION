#include <stdio.h>

int main() {
    int numero;

    // Solicitar un número al usuario
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}

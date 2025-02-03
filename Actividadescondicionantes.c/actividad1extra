#include <stdio.h>

int main() {
    int numero;

    // Solicitar un número del 1 al 5 al usuario//
    printf("Ingrese un número del 1 al 5: ");
    scanf("%d", &numero);

    // Verificar si el número está en el rango permitido//
    if (numero < 1 || numero > 5) {
        printf("Número fuera de rango. Por favor, ingrese un número del 1 al 5.\n");
        return 1; // Termina el programa con un código de error//
    }

    // Verificar si el número es primo//
    int esPrimo = 1; // Suponemos que el número es primo//
    if (numero == 1 || numero == 4) {
        esPrimo = 0; // 1 y 4 no son primos//
    }

    // Mostrar el resultado//
    if (esPrimo) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}

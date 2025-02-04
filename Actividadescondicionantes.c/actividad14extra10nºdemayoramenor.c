#include <stdio.h>

int main() {
    int numeros[10];
    int mayor, menor;

    // Solicitar los 10 números//
    for (int i = 0; i < 10; i++) {
        printf("Introduce el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializar mayor y menor con el primer número//
    mayor = menor = numeros[0];

    // Encontrar el mayor y el menor número//
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Mostrar el mayor y el menor número//
    printf("El mayor número es: %d\n", mayor);
    printf("El menor número es: %d\n", menor);

    return 0;
}

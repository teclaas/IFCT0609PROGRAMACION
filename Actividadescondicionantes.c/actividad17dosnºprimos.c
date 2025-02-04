#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo//
bool es_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num1, num2;

    // Solicitar los dos números//
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Verificar si ambos números son primos//
    if (es_primo(num1) && es_primo(num2)) {
        printf("Ambos números (%d y %d) son primos.\n", num1, num2);
    } else {
        printf("No ambos números (%d y %d) son primos.\n", num1, num2);
    }

    return 0;
}

#include <stdio.h>

// Función para determinar si un número es primo
int es_primo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Función para encontrar el menor divisor de un número no primo//
int menor_divisor(int num) {
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            return i;
        }
    }
    return num; // Este caso no debería ocurrir si num no es primo//
}

int main() {
    int N;
    
    // Leer un número no primo desde la entrada estándar//
    printf("Introduce un número no primo: ");
    scanf("%d", &N);
    
    // Verificar que el número no sea primo//
    if (es_primo(N)) {
        printf("%d es un número primo, por
        return 0;

    }
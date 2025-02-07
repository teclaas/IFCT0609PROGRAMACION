#include <stdio.h>

// Declaración de la función swap//
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    // Imprimir los valores originales de x e y//
    printf("Antes de swap: x = %d, y = %d\n", x, y);

    // Llamada a la función swap//
    swap(&x, &y);

    // Imprimir los valores después de la llamada a swap//
    printf("Después de swap: x = %d, y = %d\n", x, y);

    return 0;
}

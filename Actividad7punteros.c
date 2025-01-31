#include <stdio.h>

int main() {
    int i, a[5] = {10, 9, 8, 7, 6};
    int b[5] = {1, 2, 3, 4, 5};
    int *p1, *p2;

    // Inicializa los punteros
    p1 = &a[4];
    p2 = b;

    // Intercambia los valores
    for (i = 0; i < 5; i++) {
        *p2++ = *p1--;
    }

    // Imprime los valores de los arreglos
    for (i = 0; i < 5; i++) {
        printf("a[%d]=%d b[%d]=%d \n", i, a[i], i, b[i]);
    }

    return 0;
}

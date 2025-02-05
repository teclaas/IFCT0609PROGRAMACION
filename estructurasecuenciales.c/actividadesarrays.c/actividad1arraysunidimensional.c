#include <stdio.h>

int main() {
    int array1[5] = {1, 2, 3, 4, 5}; // Inicializamos el array con valores del 1 al 5//
    int array2[5]; // Creamos otro array de tamaño similar para copiar los valores//
    int i;

    // Copiar los valores del primer array al segundo usando un bucle//
    for (i = 0; i < 5; i++) {
        array2[i] = array1[i];
    }

    // Mostrar los valores de ambos arrays para comprobar la copia//
    printf("Valores del array1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Valores del array2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}

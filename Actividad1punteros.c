#include <stdio.h>

int main() {
    // Inicializar el arreglo original//
    int arregloOriginal[] = {1, 2, 3, 4, 5};
    int longitud = sizeof(arregloOriginal) / sizeof(arregloOriginal[0]);

    // Crear un segundo arreglo para copiar los valores//
    int arregloCopiado[longitud];

    // Copiar el contenido usando un bucle//
    for (int i = 0; i < longitud; i++) {
        arregloCopiado[i] = arregloOriginal[i];
    }

    // Mostrar los valores de ambos arreglos//
    printf("Arreglo Original: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arregloOriginal[i]);
    }

    printf("\nArreglo Copiado: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arregloCopiado[i]);
    }

    return 0;
}

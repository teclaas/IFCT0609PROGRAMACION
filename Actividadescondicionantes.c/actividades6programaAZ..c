#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz;
    int filas = 2, columnas = 2;

    // Asignar memoria para las filas
    matriz = (int **)malloc(filas * sizeof(int *));
    // Asignar memoria para las columnas de cada fila
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
    }

    // Llenar la matriz con valores y mostrarla
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = i + j; // Asignar valores simples
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria dinámica
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
#include <stdio.h>

void imprimir_arreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reordenar_arreglo(int arr[], int n) {
    int inicio = 0, fin = n - 1;
    while (inicio < fin) {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        inicio++;
        fin--;
    }
}

int main() {
    int n;

    // Solicitar el número de elementos del arreglo//
    printf("Introduce el número de elementos del arreglo: ");
    scanf("%d", &n);

    int arr[n];

    // Solicitar los elementos del arreglo//
    printf("Introduce los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Imprimir el arreglo original//
    printf("Arreglo original: ");
    imprimir_arreglo(arr, n);


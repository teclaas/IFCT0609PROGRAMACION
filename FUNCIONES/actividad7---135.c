#include <stdio.h>
#include <stdlib.h>

// Función para mostrar el menú//
void mostrar_menu() {
    printf("Menú de opciones:\n");
    printf("a) Introducir un valor entero impar comprendido entre 1 y 19\n");
    printf("b) Calcular la serie numérica 1 + 3 + 5 + ... + n\n");
    printf("c) Calcular 1 * 3 * 5 * ... * n\n");
    printf("d) Salir del programa\n");
    printf("Seleccione una opción: ");
}

// Función para verificar si un número es impar y está en el rango 1-19//
int verificar_numero_impar(int n) {
    return (n % 2 != 0 && n >= 1 && n <= 19);
}

// Función para calcular la suma de la serie numérica//
int calcular_suma(int *array, int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += array[i];
    }
    return suma;
}

// Función para calcular el producto de la serie numérica//
int calcular_producto(int *array, int tamano) {
    int producto = 1;
    for (int i = 0; i < tamano; i++) {
        producto *= array[i];
    }
    return producto;
}

int main() {
    int opcion;
    int valor;
    int *array = NULL;
    int tamano = 0;
    int max_tamano = 10;

    // Inicializar array con un tamaño máximo//
    array = (int *)malloc(max_tamano * sizeof(int));

    if (array == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    do {
        mostrar_menu();
        opcion = getchar();
        getchar(); // Consumir el carácter de nueva línea//

        switch (opcion) {
            case 'a':
                printf("Introduce un valor entero impar comprendido entre 1 y 19: ");
                scanf("%d", &valor);
                if (verificar_numero_impar(valor)) {
                    if (tamano >= max_tamano) {
                        max_tamano *= 2;
                        array = (int *)realloc(array, max_tamano * sizeof(int));
                        if (array == NULL) {
                            printf("Error al redimensionar el array.\n");
                            return 1;
                        }
                    }
                    array[tamano++] = valor;
                    printf("Valor %d introducido.\n", valor);
                } else {
                    printf("El valor no es impar o no está en el rango 1-19.\n");
                }
                break;
            case 'b':
                if (tamano > 0) {
                    int suma = calcular_suma(array, tamano);
                    printf("La suma de la serie numérica es: %d\n", suma);
                } else {
                    printf("No hay valores en la serie numérica.\n");
                }
                break;
            case 'c':
                if (tamano > 0) {
                    int producto = calcular_producto(array, tamano);
                    printf("El producto de la serie numérica es: %d\n", producto);
                } else {
                    printf("No hay valores en la serie numérica.\n");
                }
                break;
            case 'd':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }

    } while (opcion != 'd');

    // Liberar memoria asignada//
    free(array);
    return 0;
}

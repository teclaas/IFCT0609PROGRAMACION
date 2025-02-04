#include <stdio.h>

int main() {
    int opcion;

    while (1) {
        // Mostrar el menú
        printf("Menú:\n");
        printf("1. Archivo\n");
        printf("2. Buscar\n");
        printf("3. Salir\n");
        printf("Introduce una opción: ");
        scanf("%d", &opcion);

        // Procesar la opción del usuario
        switch (opcion) {
            case 1:
                printf("Has seleccionado la opción Archivo.\n");
                break;
            case 2:
                printf("Has seleccionado la opción Buscar.\n");
                break;
            case 3:
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opción no válida. Por favor, introduce una opción correcta.\n");
        }
    }

    return 0;
}

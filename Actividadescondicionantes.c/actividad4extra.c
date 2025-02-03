#include <stdio.h>

int main() {
    int numero;

    // Solicitar un número del 1 al 12 al usuario
    printf("Ingrese un número del 1 al 12: ");
    scanf("%d", &numero);

    // Verificar el número y mostrar el nombre del mes correspondiente
    switch (numero) {
        case 1:
            printf("El mes correspondiente es Enero.\n");
            break;
        case 2:
            printf("El mes correspondiente es Febrero.\n");
            break;
        case 3:
            printf("El mes correspondiente es Marzo.\n");
            break;
        case 4:
            printf("El mes correspondiente es Abril.\n");
            break;
        case 5:
            printf("El mes correspondiente es Mayo.\n");
            break;
        case 6:
            printf("El mes correspondiente es Junio.\n");
            break;
        case 7:
            printf("El mes correspondiente es Julio.\n");
            break;
        case 8:
            printf("El mes correspondiente es Agosto.\n");
            break;
        case 9:
            printf("El mes correspondiente es Septiembre.\n");
            break;
        case 10:
            printf("El mes correspondiente es Octubre.\n");
            break;
        case 11:
            printf("El mes correspondiente es Noviembre.\n");
            break;
        case 12:
            printf("El mes correspondiente es Diciembre.\n");
            break;
        default:
            printf("Número fuera de rango. Por favor, ingrese un número del 1 al 12.\n");
            break;
    }

    return 0;
}

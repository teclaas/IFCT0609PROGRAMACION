#include <stdio.h>

int main() {
    int numero;

    // Solicitar un número del 1 al 7 al usuario
    printf("Ingrese un número del 1 al 7: ");
    scanf("%d", &numero);

    // Verificar el número y mostrar el día de la semana correspondiente
    switch (numero) {
        case 1:
            printf("El día correspondiente es Lunes.\n");
            break;
        case 2:
            printf("El día correspondiente es Martes.\n");
            break;
        case 3:
            printf("El día correspondiente es Miércoles.\n");
            break;
        case 4:
            printf("El día correspondiente es Jueves.\n");
            break;
        case 5:
            printf("El día correspondiente es Viernes.\n");
            break;
        case 6:
            printf("El día correspondiente es Sábado.\n");
            break;
        case 7:
            printf("El día correspondiente es Domingo.\n");
            break;
        default:
            printf("Número fuera de rango. Por favor, ingrese un número del 1 al 7.\n");
            break;
    }

    return 0;
}

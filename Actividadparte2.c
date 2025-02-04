#include <stdio.h>

int main() {
    float sueldo;

    // Solicitar al usuario que ingrese su sueldo//
    printf("Ingrese su sueldo: ");
    scanf("%f", &sueldo);

    // Verificar si el sueldo supera los 3000 pesos//
    if (sueldo > 3000) {
        printf("Debe abonar impuestos.\n");
    } else {
        printf("No debe abonar impuestos.\n");
    }

    return 0;
}
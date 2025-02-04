#include <stdio.h>

int main() {
    int suma_pares = 0, suma_impares = 0;
    int cuenta_pares = 0, cuenta_impares = 0;
    int i;

    // Calcular la suma y la cuenta de números pares e impares
    for (i = 1; i <= 200; i++) {
        if (i % 2 == 0) {
            suma_pares += i;
            cuenta_pares++;
        } else {
            suma_impares += i;
            cuenta_impares++;
        }
    }

    // Calcular los promedios
    float promedio_pares = (float)suma_pares / cuenta_pares;
    float promedio_impares = (float)suma_impares / cuenta_impares;

    // Mostrar los resultados
    printf("Suma de los números pares: %d\n", suma_pares);
    printf("Suma de los números impares: %d\n", suma_impares);
    printf("Promedio de los números pares: %.2f\n", promedio_pares);
    printf("Promedio de los números impares: %.2f\n", promedio_impares);

    return 0;
}

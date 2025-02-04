#include <stdio.h>

// Función para calcular el sueldo neto usando una estructura iterativa
double calcular_sueldo(double sueldo_base, int años) {
    double aumento = 0.03; // Aumento mínimo del 3%
    int i;

    for (i = 1; i <= años; i++) {
        if (i > 10) {
            aumento = 0.10;
        } else if (i > 5) {
            aumento = 0.07;
        } else if (i > 3) {
            aumento = 0.05;
        }
    }

    return sueldo_base + (sueldo_base * aumento);
}

int main() {
    double sueldo_base = 40000;
    int años;
    double sueldo_neto;

    printf("Introduce el número de años que lleva en la empresa: ");

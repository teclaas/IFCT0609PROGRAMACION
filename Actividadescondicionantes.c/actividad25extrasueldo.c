#include <stdio.h>

// Función para calcular el sueldo neto
double calcular_sueldo(double sueldo_base, int años) {
    double aumento;
    if (años > 10) {
        aumento = sueldo_base * 0.10;
    } else if (años > 5) {
        aumento = sueldo_base * 0.07;
    } else if (años > 3) {
        aumento = sueldo_base * 0.05;
    } else {
        aumento = sueldo_base * 0.03;
    }
    return sueldo_base + aumento;
}

int main() {
    double sueldo_base = 40000;
    int años;
    double sueldo_neto;

    printf("Introduce el número de años que lleva en la empresa: ");
    scanf("%d", &años);

    sueldo_neto = calcular_sueldo(sueldo_base, años);

    printf("El sueldo neto es: %.2f euros\n", sueldo_neto);

    return 0;
}

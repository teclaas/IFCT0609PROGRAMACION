#include <stdio.h>

// Función para calcular el importe neto
double calcular_importe_neto(double importe_bruto) {
    double impuestos;
    if (importe_bruto > 15000) {
        impuestos = importe_bruto * 0.16;
    } else {
        impuestos = importe_bruto * 0.10;
    }
    return importe_bruto - impuestos;
}

int main() {
    double importe_bruto, importe_neto;

    printf("Introduce el importe bruto: ");
    scanf("%lf", &importe_bruto);

    importe_neto = calcular_importe_neto(importe_bruto);

    printf("El importe neto es: %.2f\n", importe_neto);

    return 0;
}

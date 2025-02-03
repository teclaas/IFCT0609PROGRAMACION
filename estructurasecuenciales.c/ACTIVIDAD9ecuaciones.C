#include <stdio.h>

// Función para resolver el sistema de ecuaciones
void resolver_sistema(double a, double b, double c, double a1, double b1, double c1, double* x, double* y) {
    // Calcula y //
    *y = (a1 * c - a * c1) / (a1 * b - a * b1);
    
    // Calcula x //
    *x = (c - b * *y) / a;
}

int main() {
    // Valores de las constantes//
    double a = 2, b = 3, c = 8;
    double a1 = 1, b1 = 2, c1 = 4;
    double x, y;

    // Resuelve el sistema de ecuaciones//
    resolver_sistema(a, b, c, a1, b1, c1, &x, &y);

    // Muestra los resultados//
    printf("Solución: x = %f, y = %f\n", x, y);

    return 0;
}

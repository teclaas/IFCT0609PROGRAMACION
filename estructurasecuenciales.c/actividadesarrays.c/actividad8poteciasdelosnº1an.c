#include <stdio.h>

int main() {
    int n;
    
    // Pedir al usuario que introduzca el valor de n//
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    // Imprimir el encabezado de la tabla//
    printf("N\tN^2\tN^3\tN^4\n");

    // Calcular y mostrar las potencias de los números del 1 al n//
    for (int i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i);
    }

    return 0;
}

#include <stdio.h>

#define VENDEDORES 18
#define PRODUCTOS 10

void almacenarIngresos(int ingresos[VENDEDORES][PRODUCTOS]) {
    int vendedor, producto, ingreso;
    printf("Introduce el número de vendedor (1-18): ");
    scanf("%d", &vendedor);
    printf("Introduce el número de producto (1-10): ");
    scanf("%d", &producto);
    printf("Introduce los ingresos: ");
    scanf("%d", &ingreso);
    if (vendedor >= 1 && vendedor <= 18 && producto >= 1 && producto <= 10) {
        ingresos[vendedor-1][producto-1] = ingreso;
        printf("Ingreso almacenado correctamente.\n");
    } else {
        printf("Número de vendedor o producto inválido.\n");
    }
}

void revisarTotalVendedor(int ingresos[VENDEDORES][PRODUCTOS]) {
    int vendedor, total = 0;
    printf("Introduce el número de vendedor (1-18): ");
    scanf("%d", &vendedor);
    if (vendedor >= 1 && vendedor <= 18) {
        for (int i = 0; i < PRODUCTOS; i++) {
            total += ingresos[vendedor-1][i];
        }
        printf("El total de ingresos del vendedor %d es: %d\n", vendedor, total);
    } else {
        printf("Número de vendedor inválido.\n");
    }
}

int main() {
    int ingresos[VENDEDORES][PRODUCTOS] = {0};

    // Llamar funciones para almacenar ingresos y revisar total de un vendedor//
    almacenarIngresos(ingresos);
    revisarTotalVendedor(ingresos);

    return 0;
}

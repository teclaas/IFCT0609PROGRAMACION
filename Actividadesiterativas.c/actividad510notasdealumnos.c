#include <stdio.h>

int main() {
    int notas[10];
    int mayor_igual_7 = 0;
    int menor_7 = 0;
    
    // Leer 10 notas de los alumnos
    printf("Introduce las notas de 10 alumnos:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &notas[i]);
    }
    
    // Contar cuántas notas son mayores o iguales a 7 y cuántas son menores
    for (int i = 0; i < 10; i++) {
        if (notas[i] >= 7) {
            mayor_igual_7++;
        } else {
            menor_7++;
        }
    }
    
    // Imprimir los resultados
    printf("Cantidad de notas mayores o iguales a 7: %d\n", mayor_igual_7);
    printf("Cantidad de notas menores a 7: %d\n", menor_7);
    
    return 0;
}

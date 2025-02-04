#include <stdio.h>

// Función para convertir de kg a gramos//
double kg_a_gramos(double kg) {
    return kg * 1000;
}

// Función para convertir de kg a libras//
double kg_a_libras(double kg) {
    return kg * 2.20462;
}

// Función para convertir de kg a onzas//
double kg_a_onzas(double kg) {
    return kg * 35.274;
}

// Función para convertir de kg a toneladas//
double kg_a_toneladas(double kg) {
    return kg / 1000;
}

int main() {
    int opcion;
    double kg, resultado;

    printf("Introduce el valor en kilogramos (kg): ");
    scanf("%lf", &kg);

    printf("Selecciona la unidad de medida de masa a la que deseas convertir:\n");
    printf("1. Gramos (g)\n");
    printf("2. Libras (lb)\n");
    printf("3. Onzas (oz)\n");
    printf("4. Toneladas (t)\n");
    printf("Introduce tu opción (1, 2, 3 o 4): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            resultado = kg_a_gramos(kg);
            printf("%.2f kg es igual a %.2f gramos.\n", kg, resultado);
            break;
        case 2:
            resultado = kg_a_libras(kg);
            printf("%.2f kg es igual a %.2f libras.\n", kg, resultado);
            break;
        case 3:
            resultado = kg_a_onzas(kg);
            printf("%.2f kg es igual a %.2f onzas.\n", kg, resultado);
            break;
        case 4:
            resultado = kg_a_toneladas(kg);
            printf("%.2f kg es igual a %.2f toneladas.\n", kg, resultado);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}

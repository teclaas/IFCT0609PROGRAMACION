#include <stdio.h>

// Función para calcular el perímetro de un triángulo equilátero
int perimetro_equilatero(int lado) {
    return 3 * lado;
}

// Función para calcular el perímetro de un triángulo isósceles
int perimetro_isosceles(int lado_igual, int lado_diferente) {
    return 2 * lado_igual + lado_diferente;
}

// Función para calcular el perímetro de un triángulo escaleno
int perimetro_escaleno(int lado1, int lado2, int lado3) {
    return lado1 + lado2 + lado3;
}

int main() {
    int opcion;
    int lado1, lado2, lado3;
    
    printf("Selecciona el tipo de triángulo:\n");
    printf("1. Equilátero\n");
    printf("2. Isósceles\n");
    printf("3. Escaleno\n");
    printf("Introduce tu opción (1, 2 o 3): ");
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1:
            printf("Introduce el lado del triángulo equilátero: ");
            scanf("%d", &lado1);
            printf("El perímetro del triángulo equilátero es: %d\n", perimetro_equilatero(lado1));
            break;
        case 2:
            printf("Introduce los dos lados iguales del triángulo isósceles: ");
            scanf("%d %d", &lado1, &lado2);
            printf("Introduce el lado diferente del triángulo isósceles: ");
            scanf("%d", &lado3);
            printf("El perímetro del triángulo isósceles es: %d\n", perimetro_isosceles(lado1, lado3));
            break;
        case 3:
            printf("Introduce los tres lados del triángulo escaleno: ");
            scanf("%d %d %d", &lado1, &lado2, &lado3);
            printf("El perímetro del triángulo escaleno es: %d\n", perimetro_escaleno(lado1, lado2, lado3));
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }
    
    return 0;
}

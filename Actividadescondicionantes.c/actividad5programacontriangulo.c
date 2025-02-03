#include <stdio.h>
#include <math.h>

// Función para determinar el tipo de triángulo
void tipoTriangulo(float a, float b, float c) {
    if (a == b && b == c) {
        printf("El triángulo es equilátero.\n");
    } else if (a == b || b == c || a == c) {
        printf("El triángulo es isósceles.\n");
    } else {
        printf("El triángulo es escaleno.\n");
    }
}

// Función para calcular el área utilizando la fórmula de Herón
float areaTriangulo(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

int main() {
    float a, b, c;
    
    // Solicita los lados del triángulo
    printf("Ingrese el primer lado del triángulo: ");
    scanf("%f", &a);
    printf("Ingrese el segundo lado del triángulo: ");
    scanf("%f", &b);
    printf("Ingrese el tercer lado del triángulo: ");
    scanf("%f", &c);
    
    // Determina el tipo de triángulo
    tipoTriangulo(a, b, c);
    
    // Calcula y muestra el área del triángulo
    float area = areaTriangulo(a, b, c);
    printf("El área del triángulo es: %.2f\n", area);
    
    return 0;
}

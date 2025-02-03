#include <stdio.h>

int main() {
    int lado, perimetro;

    // Solicitar al usuario que ingrese el lado del cuadrado
    printf("Ingresa el lado del cuadrado: ");
    scanf("%d", &lado);

    // Calcular el perímetro del cuadrado
    perimetro = lado * 4;

    // Mostrar el perímetro en pantalla
    printf("El perímetro del cuadrado es: %d\n", perimetro);

    return 0;
}

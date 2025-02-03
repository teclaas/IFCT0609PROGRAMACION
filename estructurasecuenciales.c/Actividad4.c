#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int suma;
    float promedio;

    // Solicitar al usuario que ingrese cuatro valores numéricos
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto número: ");
    scanf("%d", &num4);

    // Calcular la suma de los cuatro valores
    suma = num1 + num2 + num3 + num4;

    // Calcular el promedio de los cuatro valores
    promedio = suma / 4.0;

    // Informar los resultados usando printf
    printf("La suma de los cuatro números es: %d\n", suma);
    printf("El promedio de los cuatro números es: %.2f\n", promedio);

    return 0;
}

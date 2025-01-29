#include <stdio.h>

int main() {
    float num1, num2, suma, resta, producto, division;

    printf("Introduce el primer número: ");
    scanf("%f", &num1);

    printf("Introduce el segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        suma = num1 + num2;
        resta = num1 - num2;
        printf("La suma es: %.2f\n", suma);
        printf("La diferencia es: %.2f\n", resta);
    } else {
        producto = num1 * num2;
        if (num2 != 0) {
            division = num1 / num2;
            printf("El producto es: %.2f\n", producto);
            printf("La división es: %.2f\n", division);
        } else {
            printf("Error: División por cero.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int suma = num1 + num2;
        int diferencia = num1 - num2;
        printf("La suma es: %d\n", suma);
        printf("La diferencia es: %d\n", diferencia);
    } else {
        int producto = num1 * num2;
        if (num2 != 0) {
            float division = (float)num1 / num2;
            printf("El producto es: %d\n", producto);
            printf("La división es: %.2f\n", division);
        } else {
            printf("No se puede dividir por cero.\n");
        }
    }

    return 0;
}

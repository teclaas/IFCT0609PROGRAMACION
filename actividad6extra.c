#include <stdio.h>

int main() {
    int num1, num2, num3, temp;

    // Solicitar los tres números//
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &num3);

    // Ordenar los números de mayor a menor//
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Mostrar los números ordenados//
    printf("Los números ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

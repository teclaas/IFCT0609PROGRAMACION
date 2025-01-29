#include <stdio.h>

int main() {
    int num1, num2;

    printf("Introduce el primer número: ");
    scanf("%i", &num1);

    printf("Introduce el segundo número: ");
    scanf("%i", &num2);

    if (num1 > num2) {
        printf("El mayor es: %i\n", num1);
    } else if (num2 > num1) {
        printf("El mayor es: %i\n", num2);
    } else {
        printf("Ambos números son iguales.\n");
    }

    return 0;
}

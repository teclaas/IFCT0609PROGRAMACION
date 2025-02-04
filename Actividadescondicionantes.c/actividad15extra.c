#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar los tres números//
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &num3);

    // Verificar si el tercer número es igual a la suma del primero y el segundo//
    if (num3 == num1 + num2) {
        printf("El tercer número (%d) es igual a la suma del primero (%d) y el segundo (%d).\n", num3, num1, num2);
    } else {
        printf("El tercer número (%d) NO es igual a la suma del primero (%d) y el segundo (%d).\n", num3, num1, num2);
    }

    return 0;
}

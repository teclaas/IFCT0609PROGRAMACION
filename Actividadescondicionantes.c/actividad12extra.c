#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar los tres números
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &num3);

    // Detectar si están en orden decreciente
    if (num1 > num2 && num2 > num3) {
        printf("Los números están en orden decreciente.\n");
    } else {
        printf("Los números no están en orden decreciente.\n");
    }

    return 0;
}

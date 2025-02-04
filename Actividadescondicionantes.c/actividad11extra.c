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

    // Detectar si están en orden creciente
    if (num1 < num2 && num2 < num3) {
 return 0;
    }
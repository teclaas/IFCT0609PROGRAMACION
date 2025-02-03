#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Solicitar los tres números al usuario
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    // Comprobar si los números están en orden creciente
    if (num1 < num2 && num2 < num3) {
        printf("Los números se han introducido en orden creciente.\n");
    } else {
        printf("Los números no están en orden creciente.\n");
    }

    return 0;
}

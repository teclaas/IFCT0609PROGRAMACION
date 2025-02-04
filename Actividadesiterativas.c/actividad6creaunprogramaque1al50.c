#include <stdio.h>

int main() {
    // Bucle for para iterar sobre los números del 1 al 50
    for (int i = 1; i <= 50; i++) {
        // Verificar si el número es múltiplo de 3
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


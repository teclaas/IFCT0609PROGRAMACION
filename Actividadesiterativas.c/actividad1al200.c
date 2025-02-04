#include <stdio.h>

int main() {
    // Ejemplo de bucle for
    printf("Bucle for:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    // Ejemplo de bucle while
    printf("\nBucle while:\n");
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }

    // Ejemplo de bucle do-while
    printf("\nBucle do-while:\n");
    i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);

    return 0;
}

#include <stdio.h>

int main() {
    int num, i;
    
    // Pedir al usuario que introduzca un número//
    printf("Introduce un número: ");
    scanf("%d", &num);
    
    // Escribir la tabla de multiplicar del número introducido//
    printf("Tabla de multiplicar del %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}

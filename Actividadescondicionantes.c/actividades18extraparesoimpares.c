#include <stdio.h>

// Función para verificar si ambos números son pares o impares//
const char* verificar_paridad(int num1, int num2) {
    if (num1 % 2 == 0 && num2 % 2 == 0) {
        return "Ambos números son pares.";
    } else if (num1 % 2 != 0 && num2 % 2 != 0) {
        return "Ambos números son impares.";
    } else {
        return "Uno de los números es par y el otro es impar.";
    }
}

int main() {
    int num1 = 4;
    int num2 = 6;
    const char* resultado = verificar_paridad(num1, num2);
    printf("%s\n", resultado);
    return 0;
}

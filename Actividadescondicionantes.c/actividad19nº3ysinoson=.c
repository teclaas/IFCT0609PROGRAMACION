#include <stdio.h>

// Función para verificar si la multiplicación de dos números es igual al tercero
const char* verificar_multiplicacion(int num1, int num2, int num3) {
    if (num1 * num2 == num3) {
        return "La multiplicación de los dos primeros números es igual al tercero.";
    } else {
        return "La multiplicación de los dos primeros números NO es igual al tercero.";
    }
}

int main() {
    int num1 = 3;
    int num2 = 4;
    int num3 = 12;
    const char* resultado = verificar_multiplicacion(num1, num2, num3);
    printf("%s\n", resultado);
    return 0;
}

#include <stdio.h>

// Función para verificar si el tercer número es el resto de la división de los dos primeros
const char* verificar_resto(int num1, int num2, int num3) {
    if (num1 % num2 == num3) {
        return "El tercer número es el resto de la división de los dos primeros.";
    } else {
        return "El tercer número NO es el resto de la división de los dos primeros.";
    }
}

int main() {
    int num1 = 10;
    int num2 = 3;
    int num3 = 1;
    const char* resultado = verificar_resto(num1, num2, num3);
    printf("%s\n", resultado);
    return 0;
}

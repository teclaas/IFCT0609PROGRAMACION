#include <stdio.h>

// Función Alfa: Modifica el valor de 'val' pero no afecta a 'pos' fuera de la función.
void Alfa(int *val, float pos) {
    *val = 5; // Cambia el valor de 'a' a 5.
    pos = 7.7; // No cambia el valor de 'b' fuera de la función.
    return;
}

// Función Beta: Modifica el valor de 'pos' pero no afecta a 'val' fuera de la función//.
void Beta(int val, float *pos) {
    val = 10; // No cambia el valor de 'a' fuera de la función//
    *pos = 14.7; // Cambia el valor de 'b' a 14.7//.
}

int main(void) {
    int a = 6; // Inicializa 'a' con 6//.
    float b = 9.87; // Inicializa 'b' con 9.87//.

    printf("Al principio valen a=%d b=%f\n", a, b); // Imprime los valores iniciales de 'a' y 'b'//.
    Alfa(&a, b); // Llama a la función Alfa.
    printf("Despues de Alfa valen a=%d b=%f\n", a, b); // Imprime los valores de 'a' y 'b' después de llamar a Alfa//.
    Beta(a, &b); // Llama a la función Beta.
    printf("Después de Beta valen a=%d b=%f\n", a, b); // Imprime los valores de 'a' y 'b' después de llamar a Beta//.

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, intentos = 0;
    srand(time(0)); // Inicializar la semilla para los números aleatorios//

    printf("Comenzando el lanzamiento de dados...\n");

    do {
        intentos++;
        dado1 = rand() % 6 + 1; // Número aleatorio entre 1 y 6 para el primer dado//
        dado2 = rand() % 6 + 1; // Número aleatorio entre 1 y 6 para el segundo dado//

        printf("Intento %d: Dado 1 = %d, Dado 2 = %d\n", intentos, dado1, dado2);

        if (dado1 == 6 && dado2 == 6) {
            printf("¡Ambos dados obtuvieron un 6 en el intento %d!\n", intentos);
            break;
        }

    } while (intentos < 12);

    if (intentos == 12 && (dado1 != 6 || dado2 != 6)) {
        printf("Se alcanzó el límite de 12 intentos sin que ambos dados obtuvieran un 6.\n");
    }

    return 0;
}

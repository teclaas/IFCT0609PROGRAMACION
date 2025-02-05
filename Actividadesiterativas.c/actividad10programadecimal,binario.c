#include <stdio.h>
#include <stdlib.h>

void convertirABinario(int num) {
    char binario[32];
    int i = 0;

    while (num > 0) {
        binario[i] = (num % 2) ? '1' : '0';
        num /= 2;
        i++;
    }

    // Imprimir en orden inverso
    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binario[j]);
    }
    printf("\n");
}

void convertirAHexadecimal(int num) {
    char hexadecimal[32];
    int i = 0;

    while (num != 0) {
        int temp = num % 16;
        hexadecimal[i] = (temp < 10) ? temp + 48 : temp + 55;
        num /= 16;
        i++;
    }

    // Imprimir en orden inverso
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int num;
    char opcion;

    // Pedir al usuario que introduzca un número decimal
    printf("Introduce un número decimal: ");
    scanf("%d", &num);

    // Mostrar el menú de opciones
    printf("Selecciona una opción:\n");
    printf("B - Convertir a binario\n");
    printf("H - Convertir a hexadecimal\n");
    printf("Opción: ");
    scanf(" %c", &opcion);

    // Realizar la conversión según la opción seleccionada
    switch (opcion) {
        case 'B':
        case 'b':
            convertirABinario(num);
            break;
        case 'H':
        case 'h':
            convertirAHexadecimal(num);
            break;
        default:
            printf("Opción inválida.\n");
    }

    return 0;
}

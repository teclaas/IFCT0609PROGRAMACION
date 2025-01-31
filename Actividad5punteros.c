#include <stdio.h>

void main() {
    char *cadena = "Hola Mundo";
    char *pt;
    int x;
    pt = cadena + 1;

    for (x = 0; x < 5; x++) {
        printf("%c", *pt);
        pt += 2;
    }
    printf("\n");
}

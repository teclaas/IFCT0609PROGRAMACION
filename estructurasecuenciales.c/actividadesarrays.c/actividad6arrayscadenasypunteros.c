#include <stdio.h>

int esBisiesto(int year) {
    // Comprobar si el año es bisiesto//
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int yearDias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int *p;
    int year;

    // Pedir al usuario que introduzca el año//
    printf("Introduce un año: ");
    scanf("%d", &year);

    // Comprobar si el año es bisiesto y ajustar los días de febrero//
    if (esBisiesto(year)) {
        yearDias[1] = 29;
    }

    p = yearDias;

    for (int i = 0; i < 12; i++) {
        printf("El mes %d tiene %d días.\n", i + 1, *(p + i));
    }

    return 0;
}

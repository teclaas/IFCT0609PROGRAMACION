#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;
    int suma_pares, suma_impares;

    for (num = 1000; num <= 9999; num++) {
        d1 = num / 1000;           // Primer dígito//
        d2 = (num / 100) % 10;     // Segundo dígito//
        d3 = (num / 10) % 10;      // Tercer dígito//
        d4 = num % 10;             // Cuarto dígito//

        suma_pares = 0;
        suma_impares = 0;

        // Sumar las cifras pares e impares//
        if (d1 % 2 == 0) suma_pares += d1;
        else suma_impares += d1;
        
        if (d2 % 2 == 0) suma_pares += d2;
        else suma_impares += d2;
        
        if (d3 % 2 == 0) suma_pares += d3;
        else suma_impares += d3;
        
        if (d4 % 2 == 0) suma_pares += d4;
        else suma_impares += d4;

        // Verificar si la suma de las cifras pares es igual a la suma de las cifras impares//
        if (suma_pares == suma_impares) {
            printf("%d\n", num);
        }
    }

    return 0;
}

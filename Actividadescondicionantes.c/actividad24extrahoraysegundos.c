#include <stdio.h>

void incrementar_segundo(int *hora, int *minutos, int *segundos) {
    (*segundos)++;
    if (*segundos == 60) {
        *segundos = 0;
        (*minutos)++;
        if (*minutos == 60) {
            *minutos = 0;
            (*hora)++;
            if (*hora == 24) {
                *hora = 0;
            }
        }
    }
}

int main() {
    int hora, minutos, segundos;
    
    printf("Introduce la hora en formato hora:minutos:segundos: ");
    scanf("%d:%d:%d", &hora, &minutos, &segundos);
    
    incrementar_segundo(&hora, &minutos, &segundos);
    
    printf("La hora un segundo después es: %02d:%02d:%02d\n", hora, minutos, segundos);
    
    return 0;
}

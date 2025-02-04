#include <stdio.h>
#include <string.h>

struct datos {
    char nombre[40];
    char pais[25];
};

struct atleta {
    char deporte[30];
    struct datos pers;
    int nmedallas;
};

struct atleta ats[30];

int main() {
    int i, max_medallas = -1, index_max = -1;

    // Solicitar los datos de los 30 atletas//
    for (i = 0; i < 30; i++) {
        printf("Introduce los datos del atleta %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", ats[i].pers.nombre);
        printf("País: ");
        scanf("%s", ats[i].pers.pais);
        printf("Deporte: ");
        scanf("%s", ats[i].deporte);
        printf("Número de medallas: ");
        scanf("%d", &ats[i].nmedallas);

        // Actualizar el atleta con el mayor número de medallas//
        if (ats[i].nmedallas > max_medallas) {
            max_medallas = ats[i].nmedallas;
            index_max = i;
        }
    }

    // Mostrar los datos del atleta con mayor número de medallas//
    if (index_max != -1) {
        printf("El atleta con mayor número de medallas es:\n");
        printf("Nombre: %s\n", ats[index_max].pers.nombre);
        printf("País: %s\n", ats[index_max].pers.pais);
        printf("Deporte: %s\n", ats[index_max].deporte);
        printf("Número de medallas: %d\n", ats[index_max].nmedallas);
    } else {
        printf("No se han introducido datos de atletas.\n");
    }

    return 0;
}

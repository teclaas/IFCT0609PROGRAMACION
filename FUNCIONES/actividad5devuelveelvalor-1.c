#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definición de la estructura gps_information//
struct gps_information {
    int is_3D;
    float latitude;
    float longitude;
    float height;
};

// Prototipo de la función compare_gps//
int compare_gps(struct gps_information gps1, struct gps_information gps2, float threshold);

// Implementación de la función compare_gps//
int compare_gps(struct gps_information gps1, struct gps_information gps2, float threshold) {
    float lat_diff = fabsf(gps1.latitude - gps2.latitude);
    float long_diff = fabsf(gps1.longitude - gps2.longitude);

    if (lat_diff <= threshold && long_diff <= threshold) {
        return 1;
    } else {
        return 0;
    }
}

// Función para listar dispositivos USB conectados//
void list_usb_devices() {
    FILE *fp;
    char path[1035];

    // Ejecuta el comando lsusb para listar los dispositivos USB//
    fp = popen("lsusb", "r");
    if (fp == NULL) {
        printf("No se pudo ejecutar el comando.\n");
        exit(1);
    }

    // Lee la salida del comando y la imprime//
    while (fgets(path, sizeof(path), fp) != NULL) {
        printf("%s", path);
    }

    // Cierra el proceso//
    pclose(fp);
}

// Prototipo de la nueva función que compara dos tablas de estructuras gps_information//
int compare_gps_tables(struct gps_information *table1, struct gps_information *table2, int length, float threshold);

// Implementación de la función que compara dos tablas de estructuras gps_information//
int compare_gps_tables(struct gps_information *table1, struct gps_information *table2, int length, float threshold) {
    for (int i = 0; i < length; i++) {
        if (compare_gps(table1[i], table2[i], threshold)) {
            return i; // Devuelve el índice del primer par de elementos que están cerca//
        }
    }
    return -1; // Devuelve -1 si no se cumple la condición para ningún par de elementos//
}

int main() {
    // Listar dispositivos USB conectados//
    printf("Dispositivos USB conectados:\n");
    list_usb_devices();

    // Ejemplo de comparación de información GPS//
    struct gps_information gps1 = {1, 40.712776, -74.005974, 10.0};
    struct gps_information gps2 = {1, 40.712776, -74.005974, 15.0};
    float threshold = 0.1;

    int result = compare_gps(gps1, gps2, threshold);

    if (result) {
        printf("Las coordenadas están dentro del umbral.\n");
    } else {
        printf("Las coordenadas están fuera del umbral.\n");
    }

    // Ejemplo de comparación de tablas de información GPS//
    struct gps_information table1[3] = {
        {1, 40.712776, -74.005974, 10.0},
        {1, 34.052235, -118.243683, 15.0},
        {1, 51.507351, -0.127758, 5.0}
    };
    struct gps_information table2[3] = {
        {1, 40.712776, -74.005974, 15.0},
        {1, 34.052235, -118.243683, 10.0},
        {1, 51.507351, -0.127758, 8.0}
    };

    int index = compare_gps_tables(table1, table2, 3, 0.5);

    if (index != -1) {
        printf("El primer par de elementos cercanos está en el índice: %d\n", index);
    } else {
        printf("No hay pares de elementos cercanos dentro del umbral.\n");
    }

    return 0;
}

}

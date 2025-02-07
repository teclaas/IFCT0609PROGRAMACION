#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main() {
    printf("Dispositivos USB conectados:\n");
    list_usb_devices();
    return 0;
}

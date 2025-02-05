#include<stdio.h>

int main(void)
{
    //definicion de variables que voy a utilizar//
    float suma =0;
    float media;
    float max;
    float min;
    //Crear un array de float//
    float grupo[10];
    int i; //variable de control para acceder a las posiciones del array
    //Asignar valores directamente a cada ubicación//
    grupo[0] = 0;
    grupo[1] = 0;
    grupo[2] = 0;

    // Poner todas las posiciones en cero//
    for (i=0; i<=9; i++)
    {
        grupo[i] = 0;
    } //fin del for, aqui todas las posiciones del array estan inicializadas a 0//

    //Leer datos y guardarlos en el arreglo//
    for(i=0; i<=9; i++){
        printf("\nEscriba el valor %d", i);
        scanf("%f", &grupo[i]);
    }//fin del for. Aqui cada posicion del array tendra el valor que haya introducido//
        // el usuario por teclado//
    
    //
    for (i=0; i<10; i++){
    printf("En posicion %d el valor es %f\n", i, grupo[i]);
    } //fin del for. Este for me muestra todo el array//

    // Sumar todos los datos de un arreglo//

    //calcular la suma de todos los valores del array//
    for(i=0; i<10; i++){
        suma+=grupo[i];
    }//fin del for, calculo la suma//
    
    //calculo la media de todos los valores del array//
    media = suma / 10;
    printf("La media es %.2f", media);

//Obtener el valor máximo de un array//

    max=grupo[0];
    for(i=0; i<10; i++){
        if (grupo[i] > max){
            max=grupo[i];
        }
    }
    printf("El valor máximo es %.2f", max);

    //calcular el minimo de los valores almacenados en el array//

    min=grupo[0];
    for(i=0; i<10; i++){
        if (grupo[i] < min){
            min=grupo[i];
        }
    }
    printf("El valor minimo es %.2f", min);

    printf("fin de programa");
    
    return 0;
}

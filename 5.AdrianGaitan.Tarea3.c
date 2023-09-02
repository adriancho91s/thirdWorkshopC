/*
- Fecha: 30 de agosto 2023
- Hora: 9:00 am
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- 
*/

//Librerías
#include<stdio.h>


int perrin(int enesimo) {
    return (enesimo == 0) ? 3 :
           (enesimo == 1) ? 0 :
           (enesimo == 2) ? 2 :
           perrin(enesimo - 2) + perrin(enesimo - 3);
}

int imprimirPerrin(int terminoInicial, int cantidadTerminos) {
    if (terminoInicial >= (cantidadTerminos - 1)) {
        printf("%i.\n", perrin(terminoInicial));
        return 0;
    }
    printf("%i, ", perrin(terminoInicial));
    imprimirPerrin(terminoInicial + 1, cantidadTerminos);
    return 0;
}

int main () {
    int cantidadTerminos = 0;
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Padovan.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);
    printf("\nLa cantidad %i de términos de la serie de Padovan son: ", cantidadTerminos);
    imprimirPerrin(0, cantidadTerminos);
    return 0;
}
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
*/

//Librerías
#include<stdio.h>


int narayana(int enesimo) {
    return (enesimo == 0) ? 1 :
           (enesimo == 1) ? 1 :
           (enesimo == 2) ? 1 :
           narayana(enesimo - 1) + narayana(enesimo - 3);
}

int imprimirNarayana(int terminoInicial, int cantidadTerminos) {
    if (terminoInicial >= (cantidadTerminos - 1)) {
        printf("%i.\n", narayana(terminoInicial));
        return 0;
    }
    printf("%i, ", narayana(terminoInicial));
    imprimirNarayana(terminoInicial + 1, cantidadTerminos);
    return 0;
}

int main() {
    int cantidadTerminos = 0;
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Narayana.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);
    printf("\nLa cantidad %i de términos de la serie de Padovan son: ", cantidadTerminos);
    imprimirNarayana(0, cantidadTerminos);
    return 0;
}
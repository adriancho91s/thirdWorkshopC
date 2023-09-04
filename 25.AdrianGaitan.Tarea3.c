/*
- Fecha: 1 de septiembre 2023
- Hora: 12:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla una figura en el centro de la pantalla, la figura
- es un rombo con una altura de 7 caracteres y un ancho de 7 caracteres. 
- La figura se imprime desde el centro de la pantalla hasta los extremos de la misma.
- Entrada: Ninguna.
- Salida: Un rombo con una altura de 7 caracteres y un ancho de 7 caracteres.
*/

//Librerías
#include <stdio.h>
#include <stdlib.h>

int printChar(char caracter, int cantidad) {
    if (cantidad == 0) {
        return 0;
    } else {
        printf("%c", caracter);
        return printChar(caracter, cantidad - 1);
    }
}// Esta función imprime un caracter la cantidad de veces que se le indique

int printFigureDown(int spaces, int letters){
    if ((spaces < 10) && (spaces >= 6)) {
        printChar(' ', spaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
        return printFigureDown(spaces + 1, letters - 2);
    }
    return 0;
}// Esta función imprime la parte de abajo de la figura

int printFigureUp(int spaces, int letters) {
    if (! (spaces <= 6) ) {
        printChar(' ', spaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.05");
        return printFigureUp(spaces - 1, letters + 2);
    } else {
        return printFigureDown(6, 7);
    }
    return 0;
}// Esta función imprime la parte de arriba de la figura

int main () {
    //Impresión de figura
    printFigureUp(9, 1);
    return 0;
}
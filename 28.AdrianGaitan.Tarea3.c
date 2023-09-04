/*
- Fecha: 1 de septiembre 2023
- Hora: 1:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una figura que corresponde a un triangulo con letras "A",
- el triangulo tiene el vertice en la izquierda de la pantalla y la base en la derecha.
- Entrada: Ninguna.
- Salida: Un triangulo con letras "A".
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
}

int printTriangleDown(int spaces, int letters){
    if (letters == 0) {
        return 0;
    } else {
        printChar(' ', spaces);
        printChar('A', letters);
        printChar('\n', 1);
        system("sleep 0.03");
        return printTriangleDown(spaces + 1, letters -1);
    }
}

int printTriangleUp(int spaces, int letters) {
    if (! (spaces == 34)) {
        printChar(' ', spaces);
        printChar('A', letters);
        printChar('\n', 1);
        system("sleep 0.03");
        return printTriangleUp(spaces - 1, letters + 1);
    } else {
        return printTriangleDown(34, letters);
    }
}

int main () {
    //Impresión de figura
    printTriangleUp(39, 1);
    return 0;
}
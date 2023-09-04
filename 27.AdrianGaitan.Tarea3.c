/*
- Fecha: 1 de septiembre 2023
- Hora: 12:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola una figura que forma el contorno un triangulo con letras "Z"
- El vertice del triangulo está ubicado en la parte superior de la pantalla y la base del
- triangulo está ubicada en la parte inferior de la pantalla.
- Entrada: Ninguna.
- Salida: Un triangulo con letras "Z".
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

int printTriangule(int interiorSpaces, int exteriorSpaces, int letters) {
    if (interiorSpaces == 0) {
        printChar(' ', exteriorSpaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.03");
        return printTriangule(1, exteriorSpaces - 1, letters);
    } 
    if (exteriorSpaces >= 0) {
        printChar(' ', exteriorSpaces);
        printChar('Z', letters);
        printChar(' ', interiorSpaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.03");
        return printTriangule(interiorSpaces + 2, exteriorSpaces - 1, letters);
    }
    return 0;
}// Esta función imprime el triangulo con letras "Z"

int main () {
    //Impresión de figura
    printTriangule(0, 9, 1);
    return 0;
}
/*
- Fecha: 1 de septiembre 2023
- Hora: 9:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una animación con el caracteres ascii.
- Empieza una linea con 13 caracteres del  ascii 80, y en la siguiente línea reduce
- la cantidad de letras en 2, y reduce el carácter ascii en 2, e imprime un espacio más. Hasta que queda un 
- solo caracter en la ultima linea.
- Entrada: Ninguna.
- Salida: Una animación con caracteres ascii.
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

int printTriangleAscii(int espacios, int letras, int ascii) {
    if (espacios == 7) {
        return 0;
    } else {
        printChar(' ', espacios);
        printChar(ascii, letras);
        printChar('\n', 1);
        system("sleep 0.26");
        return printTriangleAscii(espacios + 1, letras - 2, ascii - 2);
    }
}

//Función principal
int main () {
    //Impresión de animación
    printTriangleAscii(0, 13, 80);

    return 0;
}
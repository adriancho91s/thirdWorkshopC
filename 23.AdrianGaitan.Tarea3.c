/*
- Fecha: 1 de septiembre 2023
- Hora: 9:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una animación con letras "P". empieza con una linea
- de tamaño de 13, y se va reduciendo en sus extremos hasta que en la mitad de la pantalla
- queda una "P". Forma un triangulo invertido, con su base en la parte superior.
- Entrada: Ninguna.
- Salida: Una animación con letras "P".
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

int printTriangle(int espacios, int letras) {
    if (espacios == 7) {
        return 0;
    } else {
        printChar(' ', espacios);
        printChar('P', letras);
        printChar('\n', 1);
        system("sleep 0.25");
        return printTriangle(espacios + 1, letras - 2);
    }
}

//Función principal
int main () {
    //Impresión de animación
    printTriangle(0, 13);

    return 0;
}
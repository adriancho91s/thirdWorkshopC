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
- Este programa imprime en pantalla una especie de animación con dos letras "A".
- Inicialmente se imprime una letra "A" separada por 5 espacios de la otra letra "A",
- luego se van acercando hasta que se encuentran en la mitad de la pantalla, y luego
- se separan hasta que la distancia entre ellas es de 5 espacios.
- Entrada: Ninguna.
- Salida: Una animación con dos letras "A".
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

int printFigureDown(int spaces, int letters) {
    if (spaces > 5) {
        return 0;
    } else {
        printChar(' ', 27);
        printChar('A', letters);
        printChar(' ', spaces);
        printChar('A', letters);
        printChar('\n', 1);
        system("sleep 0.25");
        return printFigureDown(spaces + 2, letters - 1);
    }
}// Esta función imprime la parte de abajo de la figura, empieza con un espacio en medio
// y va aumentando los espacios y disminuyendo las letras hasta 5 espacios y 1 letra a
// cada lado

int printFigureUp(int spaces, int letters) {
    if (spaces < 0) {
        printChar(' ', 27);
        printChar('A', 7);
        printChar('\n', 1);
        printFigureDown(1, 3);
        return 0;
    } else {
        printChar(' ', 27);
        printChar('A', letters);
        printChar(' ', spaces);
        printChar('A', letters);
        printChar('\n', 1);
        system("sleep 0.125");//Ajustar la velocidad de la animación
        return printFigureUp(spaces - 2, letters + 1);
    }
}// Esta función imprime la parte de arriba de la figura, empieza con 5 espacios y 1 letra
// a cada lado y va disminuyendo los espacios y aumentando las letras hasta 0 espacios y 7 letras

//Función principal
int main () {
    //Impresión de animación
    printFigureUp(5, 1);

    return 0;
}
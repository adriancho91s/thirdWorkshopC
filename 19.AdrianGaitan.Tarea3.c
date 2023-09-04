/*
- Fecha: 1 de septiembre 2023
- Hora: 3:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una especie de animación con dos letras "A".
- Inicialmente están separadas por una distancia de 79 espacios, y van acercándose
- hasta que se encuentran en la mitad de la pantalla. 
- Entrada: Ninguna.
- Salida: Una animación con dos letras "A".
- Restriccion: solo se puede usar una función printf() por caracter, 
- printf(" ") printf("A") printf("A\n")
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

//Función que imprime una animación con dos letras "A"
int imprimirLetras(int distancia1, int distancia2) {
    if (distancia1 == 40){
        return 0;
    } else {
        printChar(' ', distancia1);
        printChar('A', 1);
        printChar(' ', distancia2);
        printChar('A', 1);
        printChar('\n', 1);
        system("sleep 0.125");
        return imprimirLetras(distancia1 + 1, distancia2 - 2);
    }
}

//Función principal
int main () {
    //Impresión de animación
    imprimirLetras(0, 79);

    system("sleep 0.5");
    return 0;
}
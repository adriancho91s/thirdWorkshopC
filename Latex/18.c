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
- El programa imprime por consola 3 filas de números enteros positivos, cada fila con 9 números.
- En la primer columna empieza desde 1 y va aumentando de 1 en 1 hasta 9. En la segunda columna
- empieza en 1, pero aumenta de 1 cada 3 números. En la tercera columna empieza en 1, aumenta de 1
- en 1, pero empieza de nuevo en 1 cada 3 números.
- Salida: 3 filas de números enteros positivos.
*/

//Librerías
#include <stdio.h>

//Función que imprime 3 filas de números enteros positivos
int imprimirNumeros(int numero1, int numero2, int numero3, int contador) {
    if (contador == 10) {
        return 0;
    } else if (contador % 3 == 0) {
        printf("%d %d %d\n", numero1, numero2, numero3);
        return imprimirNumeros(numero1 + 1, numero2 + 1, 1, contador + 1);
    } else {
        printf("%d %d %d\n", numero1, numero2, numero3);
        return imprimirNumeros(numero1 + 1, numero2, numero3 + 1, contador + 1);
    }
}

//Función principal
int main () {
    //Mensaje de bienvenida
    printf("Este programa imprime por consola 3 filas de números enteros positivos, cada fila con 9 números.\n\n");

    //Impresión de filas
    imprimirNumeros(1, 1, 1, 1);

    return 0;
}
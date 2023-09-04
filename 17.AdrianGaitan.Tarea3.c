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
- Este programa imprime en pantalla una pareja de números enteros positivos
- en la primera columna empieza con 0 y va a aumentado hasta 9, un total de 10 iteraciones.
- En la segunda columna empieza con 1 y va aumentando de dos en dos, hasta 5. Estas se imprimen 
- en la misma fila, pero separadas por un espacio.
- Entrada: Ninguna.
- Salida: Una pareja de números enteros positivos.
*/

//Librerías
#include <stdio.h>

//Función que imprime parejas de números enteros positivos
int imprimirParejas(int numero1, int numero2, int contador) {
    if (contador > 10) {
        return 0;
    }
    else {
        if (contador % 2 == 0) {
            printf("%d %d\n", numero1, numero2);
            return imprimirParejas(numero1 + 1, numero2 + 2, contador + 1);
        }
        else {
            printf("%d %d\n", numero1, numero2);
            return imprimirParejas(numero1 + 1, numero2, contador + 1);
        }
    }
}
//Función principal
int main () {
    //Mensaje de bienvenida
    printf("Este programa imprime en pantalla una pareja de números enteros positivos.\n\n");
    //Impresión de parejas
    imprimirParejas(0, 1, 1);

    return 0;
}
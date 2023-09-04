/*
- Fecha: 1 de septiembre 2023
- Hora: 2:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola todas las tablas de multiplicar de 1 a 10.
- Entrada: Ninguna.
- Salida: Todas las tablas de multiplicar de 1 a 10.
*/

//Librerías
#include <stdio.h>

//Función recursiva que imprime la tabla de multiplicar del 1 al 10

int tablaMultiplicar(int numero, int multiplicador, int contador) {
    if (contador >= 11) {
        return 0;
    }
    printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
    if (multiplicador >= 10) {
        printf("\n");
        tablaMultiplicar(numero + 1, 1, contador + 1);
    } else {
        tablaMultiplicar(numero, multiplicador + 1, contador);
    }
    return 0;
}

//Función principal
int main () {
    //Impresión de las tablas de multiplicar
    tablaMultiplicar(1, 1, 1);

    return 0;
}
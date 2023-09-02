/*
- Fecha: 30 de agosto 2023
- Hora: 9:00 am
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla el número de terminos que solicita el usuario
- Entrada: número de terminos deseados de la serie de Padovan (numero)
- Salida: los primeros n terminos de la serie de Padovan
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include<stdio.h>

//Funciones custom
int padovan(int enesimo) {
    return (enesimo == 0) ? 1 :
           (enesimo == 1 || enesimo ==  2) ? 0 :
           padovan(enesimo - 2) + padovan(enesimo - 3);
}

void imprimirPadovan(int enesimo) {
    (enesimo == 0) ? printf("%i", padovan(enesimo)) : (imprimirPadovan(enesimo - 1), printf(", %i", padovan(enesimo)));
}

int main () {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Padovan.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\nLa cantidad %i de términos de la serie de Padovan son: ", cantidadTerminos);
    imprimirPadovan(cantidadTerminos - 1);//Se resta 1 porque el primer término es 0.
    return 0;
}
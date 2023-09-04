/*
- Fecha: 29 de agosto 2023
- Hora: 9:00 am
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantala la serie d narayana hasta el enésimo término.
- Entrada: Un número entero n que representa el enésimo término de la serie de Narayana.
- Salida: El enésimo término de la serie de Narayana.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include<stdio.h>

// Funciones
int narayana(int enesimo) {
    return (enesimo >= 0 && enesimo <= 2) ? 1 :
           narayana(enesimo - 1) + narayana(enesimo - 3);
}//Función recursiva que calcula el enésimo término de la serie de Narayana.

void imprimirNarayana(int enesimo){
    enesimo == 0 ? printf("%d", narayana(enesimo)) : 
            (imprimirNarayana(enesimo - 1), printf(", %d", narayana(enesimo)));
    // Esta función imprime los números de Narayana de 0 a n.
}

int main() {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;//Cantidad de terminos deseados

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la secuencia de Narayana.\nEsta serie comienza con los números 1, 1 y 1. Los siguientes términos\nse calculan como la suma del término anterior y el número de parejas\nde términos consecutivos anteriores que son diferentes.\n");
    printf("Ingrese la cantidad de términos de la secuencia de Narayana que deseas que se impriman: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\n\nLa cantidad %i de términos de la serie de Narayana son: ", cantidadTerminos);
    imprimirNarayana(cantidadTerminos - 1);//Se resta 1 porque el primer término es 0.
    return 0;
}
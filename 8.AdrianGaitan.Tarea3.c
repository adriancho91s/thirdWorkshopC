/*
- Fecha: 29 de agosto 2023
- Hora: 8:30 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla los terminos de la serie de Catalan,
- que solicite el usuario.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Catalan.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

// Librerías
#include<stdio.h>

// Funciones
double factorial(double numero, double acumulador) {
    return (numero == 0) ? acumulador :
           factorial(numero - 1, acumulador * numero);
}// Esta función calcula el factorial de un número n.

double catalan(double enesimo) {
    return (enesimo == 0) ? 1 :
           ( factorial(2 * enesimo, 1) / (  factorial(enesimo, 1) * (factorial(enesimo + 1, 1))  ) );
}// Esta función calcula el número de Catalan de n.


void imprimirCatalan(int enesimo){
    enesimo == 0 ? printf("%.0f", catalan(enesimo)) : (imprimirCatalan(enesimo - 1), printf(", %.0f", catalan(enesimo)));
    // Esta función imprime los números de Catalan de 0 a n.
}

int main () {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla hasta el termino enesimo que solicites.\n De la serie Catalan es una secuencia de números que aparece en diversos problemas de conteo en matemáticas\n Comienza con los números 1, 1 y los siguientes términos se calculan como la suma de los productos de los términos anteriores.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\nLa cantidad %i de términos de la serie de Catalan es: ", cantidadTerminos);
    imprimirCatalan(cantidadTerminos - 1);//Se resta 1 porque el primer término es 0.

    return 0;
}
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
- Este programa recibe como valor de entrada un número entero positivo n,
- y luego, en consola imprime la sumatoría de los factoriales de 0 a n.
- Entrada: Un número entero positivo.
- Salida: La sumatoria de los factoriales de 0 a n. N = 0! + 1! + 2! + ... + n! = ?
- Restricciones: El número debe ser entero positivo.
*/

//Librerías
#include <stdio.h>

//Factorial
long int factorial(int numero) {
    return numero == 0 ? 1 : numero * factorial(numero - 1);
}

//Sumatoria de factoriales
long int sumatoriaFactoriales(int numero) {
    return numero == 0 ? 1 : factorial(numero) + sumatoriaFactoriales(numero - 1);
}

//Leer número
int leerNumero(int numero) {
    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibe como valor de entrada un número entero positivo n,\ny luego, en consola imprime la sumatoría de los factoriales de 0 a n.\nN = 0! + 1! + 2! + ... + n! = ?\nIngrese el número que desea calcular su sumatoria de factoriales: ");
    scanf("%d", &numero);

    //Validación de número
    return numero < 0 ? (printf("\nEl número debe ser entero positivo.\n\n"), leerNumero(numero)) : 
           numero;
}

//Impresión de suma
int imprimirSumatoria(int enesimo, int termino) {
    if (enesimo == termino) {
        printf("%d! = %ld", termino, sumatoriaFactoriales(termino));
        return 0;
    } else {
        printf("%d! + ", termino);
        return imprimirSumatoria(enesimo, termino + 1);
    }
}

//Función principal
int main () {
    //Declaración e inicialización de variables
    int numero = 0;//Número que se va a calcular

    //Lectura y asignación de número
    numero = leerNumero(numero);

    //Impresion de sumatoria
    imprimirSumatoria(numero, 0);

    return 0;
}
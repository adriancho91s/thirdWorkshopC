/*
- Fecha: 1 de septiembre 2023
- Hora: 1:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número x, en el que quiere evaluar la serie de Taylor
- y un valor enesimo, que corresponde a la cantidad de términos que se quieren evaluar del senh(x)
- Entrada: Un número x y un número n.
- Salida: El resultado de la serie de Taylor.
*/

//Librerías
#include <stdio.h>
#include <math.h>

double factorial( int enesimo ){
    return (enesimo == 0) ? 1 : enesimo * factorial(enesimo - 1);
}

double taylorSenh(int x,  int enesimo) {
    if (enesimo == 0) {
        return pow(x, 2 * enesimo + 1) / factorial(2 * enesimo + 1);
    } else {
        return pow(x, 2 * enesimo + 1) / factorial(2 * enesimo + 1) + taylorSenh(x, enesimo - 1);
    }
}

int main () {
    //Declaración e inicialización de variables
    double x = 0, enesimo = 0;
    //enesimo es el número de términos y x es el valor en que va a ser evaluada la función

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de Senh(x)\n");

    //Entrada de datos
    printf("\nIngrese el valor de x: ");
    scanf("%lf", &x);
    printf("\nIngrese la cantidad de términos: ");
    scanf("%lf", &enesimo);

    //Impresión de resultados
    printf("\nEl resultado de la serie de Taylor Senh(%.2lf) es: %f\n", x , taylorSenh(x, enesimo));
    return 0;
}
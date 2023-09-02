/*
- Fecha: 1 de septiembre 2023
- Hora: 8:30 am
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla los primeros n términos de la serie de Bell:
- Esta serie cuenta el número de particiones no vacías de un conjunto de n elementos.
- Comienza con los números 1, 1 y los siguientes términos se calculan como la suma de
- los términos anteriores multiplicados por los números naturales consecutivos.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Bell.
*/

// Librerías
#include <stdio.h>

// Las funciones se declaran antes de ser usadas. Esto es para que el compilador sepa que existen.
int Factorial(int n);                    // Esta función calcula el factorial de un número n.
double Combinator(int n, int k);         // Esta función calcula el coeficiente binomial de n y k.
int Complementor(int n, int x, int acc); // Esta función calcula la suma de los coeficientes binomiales de n y k.
int bellNumber(int n);                   // Esta función calcula el número de Bell de n.
void printBellNumbers(int n);            // Esta función imprime los números de Bell de 0 a n.

int Factorial(int n){
    return (n == 0) ? 1 : n * Factorial(n - 1);
}

double Combinator(int n, int k){
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}

int Complementor(int n, int x, int acc){
    return (x == n) ? acc : 
                    Complementor(n, x + 1, acc + Combinator(n - 1, x) * bellNumber(x));
}

int bellNumber(int n){
    return (n <= 1) ? 1 :
                    Complementor(n, 0, 0);
}

void printBellNumbers(int n){
    if (n == 0) {
        printf("%d", bellNumber(n));
    } else {
        printBellNumbers(n - 1);
        printf(", %d", bellNumber(n));
    }
}

int main()
{
    int n = 0; // Esta variable almacena el número de términos que se desean imprimir.
    printf("Este programa va imprimir los términos que le solicites de la serie de Bell: \nEsta serie cuenta el número de particiones no vacías de un conjunto de n elementos. \nComienza con los números 1, 1 y los siguientes términos se calculan como la suma de \nlos términos anteriores multiplicados por los números naturales consecutivos.\nIngrese a continuación el número de términos deseados:\n");
    scanf("%d", &n);
    printf("Los primeros %d términos de la serie de Bell son: ", n);
    printBellNumbers(n);
    return 0;
}
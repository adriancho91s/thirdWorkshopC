/*
*/

#include<stdio.h>

double factorial(double numero, double acumulador) {
    return (numero == 0) ? acumulador :
           factorial(numero - 1, acumulador * numero);
}

double catalan(double enesimo) {
    return (enesimo == 0) ? 1 :
           ( factorial(2 * enesimo, 1) / (  factorial(enesimo, 1) * (factorial(enesimo + 1, 1))  ) );
}


int imprimirCatalan(int terminoInicial, int cantidadTerminos) {
    if (terminoInicial >= (cantidadTerminos - 1)) {
        printf("%.0f.\n", catalan(terminoInicial));
        return 0;
    }
    printf("%.0f, ", catalan(terminoInicial));
    imprimirCatalan(terminoInicial + 1, cantidadTerminos);
    return 0;
}

int main () {
    int cantidadTerminos = 0;
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Padovan.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);
    printf("\nLa cantidad %i de términos de la serie de Padovan son: ", cantidadTerminos);
    imprimirCatalan(0, cantidadTerminos);
    return 0;
}
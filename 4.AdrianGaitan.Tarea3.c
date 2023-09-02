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
- El programa imprime en consola el número de terminos deseados de
- la serie de Pell que consiste en que el siguiente termino de la serie
- es igual al doble del anterior más el anterior al anterior.
- Entrada: número de terminos deseados de la serie de Pell
- Salida: los primeros n terminos de la serie de Pell
*/
//Librerías
#include<stdio.h>

/*
Prototipo de la función pell:
- Nombre: pell
- Tipo de retorno: int
- Parámetros: int primerValor, int segundoValor, int contador, int límite(parametros con los que inicia la serie),
- contador lleva la cuenta de los terminos de la serie hasta el rango dado. El límite es el número de terminos deseados.
- Descripción: La función imprime en pantalla los n terminos de la serie de Pell.
*/

int pell (int primerValor, int segundoValor, int contador, int limite) {
    if (contador >= limite) {
        printf("%i.\n", primerValor);
        return 0;
    }
    printf("%i, ", primerValor);
    pell(segundoValor, (2 * segundoValor + primerValor), (contador + 1), limite);
    return 0;
}

//Función Principal
int main () {
    //Declaración e inicialización de variables
    int limite = 0;

    //Entrada de datos
    printf("Este programa imprime en pantalla el número de terminos deseados de la serie de Pell.\n");
    printf("Ingrese la cantidad de términos de la serie de Pell que desea ver: ");
    scanf("%i", &limite);

    //Salida de datos
    printf("\nLa cantidad %i de términos de la serie de Pell es: ", limite);
    pell(0, 1, 1, limite);//Llamado a la función pell con los valores iniciales

    return 0;
}
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
- El programa imprime en pantalla los primeros 10 terminos de la serie de Lucas
- Entrada: número de terminos deseados de la serie de Lucas (numero)
- Salida: los primeros 10 terminos de la serie de Lucas
*/

//Librerías
#include<stdio.h>

/*
Prototipo de la función lucas:
- Nombre: lucas
- Tipo de retorno: int
- Parámetros: int primerValor, int segundoValor, int contador(parametros con los que inicia la serie),
- numeroTerminos, establece el límite de iteraciones, contador lleva la cuenta de los terminos de la serie hasta el rango dado.
- Descripción: La función imprime en pantalla los primeros 10 terminos de la serie de Lucas.
*/
int lucas (int primerValor, int segundoValor, int contador, int numeroTerminos) {
    if (contador > numeroTerminos) {
        return 0;
    }
    printf(",%i ", primerValor);
    lucas(segundoValor, (segundoValor + primerValor), (contador + 1), numeroTerminos);
    return 0;
}

//Función Principal
int main () {
    //Declaración e inicialización de variables
    int numeroTerminos = 0;

    //Entrada de datos
    printf("Este programa imprime en pantalla el número de terminos deseados de la serie de Lucas.\n");
    printf("Ingrese la cantidad de términos de la serie de Lucas que desea ver: ");
    scanf("%i", &numeroTerminos);

    //Salida de datos
    printf("\nLa cantidad %i de términos de la serie de Lucas son: ", numeroTerminos);
    lucas(2, 1, 1, numeroTerminos);//Llamado a la función lucas con los valores iniciales

    return 0;
}
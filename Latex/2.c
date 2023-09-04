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
- El programa imprime en pantalla la sumaa de cada termino de la serie de fibonacci,
- hasta antes de alcanzar un número mayor a 100
- Salida: resultado de la sumaa de cada termino en el rango establecido
*/
//Librerías
#include<stdio.h>

/*
Prototipo de la función fibonacci:
- Nombre: fibonacci
- Tipo de retorno: int
- Parámetros: int primerValor, int segundoValor, int suma(parametros con los que inicia la serie),
- suma acumula el valor de cada termino de la serie hasta el rango dado.
- Descripción: La función imprime en pantalla la sumaa de cada termino de la serie de fibonacci,
- hasta antes de alcanzar un número mayor a 100, con el que finaliza la serie. Y 
- arroja su resultado.
*/

int fibonacci (int primerValor, int segundoValor, int suma) {
    if (segundoValor > 100) {
        printf("\x1b[31m%i \x1b[0m", primerValor);
        printf("\x1b[31my su suma es: %i.\x1b[0m", suma);
        return 0;
    }
    printf("\x1b[31m%i,\x1b[0m ", primerValor);
    fibonacci(segundoValor, (segundoValor + primerValor), (suma + segundoValor));
    return 0;
}

//Función Principal
int main () {
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a sumar son: \n");
    fibonacci(0, 1, 0);//Llamado a la función fibonacci con los valores iniciales
    return 0;
}
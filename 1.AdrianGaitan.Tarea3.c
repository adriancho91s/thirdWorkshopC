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
- El programa imprimi en pantalla la serie de fibonacci hasta el número 10000
- Salida: La serie de fibonacci hasta el número 10000
*/

//Librerías
#include <stdio.h>

/*
El prototipo de la función fibonacci es:
- Nombre: fibonacci
- Tipo de retorno: int
- Parámetros: int primerValor, int segundoValor(parametros con los que inicia la serie)
- Descripción: La función imprime en pantalla la serie de fibonacci hasta el número 10000
*/

int fibonacci (int primerValor, int segundoValor) {
    if (primerValor > 10000) {
        return 0;
    }
    printf("%i ", primerValor);
    fibonacci(segundoValor, (segundoValor + primerValor));
}

//Función Principal
int main () {
    printf("Serie de fibonacci hasta el número 10000: \n");
    fibonacci(0, 1);
    return 0;
}
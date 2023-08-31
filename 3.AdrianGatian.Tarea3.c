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
- Salida: los primeros 10 terminos de la serie de Lucas
*/

//Librerías
#include<stdio.h>
#include <stdio.h>

/*
Prototipo de la función lucas:
- Nombre: lucas
- Tipo de retorno: int
- Parámetros: int primerValor, int segundoValor, int contador(parametros con los que inicia la serie),
- contador lleva la cuenta de los terminos de la serie hasta el rango dado.
- Descripción: La función imprime en pantalla los primeros 10 terminos de la serie de Lucas.
*/
int lucas (int primerValor, int segundoValor, int contador) {
    if (contador > 9) {
        return 0;
    }
    printf("%i ", primerValor);
    lucas(segundoValor, (segundoValor + primerValor), (contador + 1));
    return 0;
}

//Función Principal
int main () {
    lucas(2, 1, 1);//Llamado a la función lucas con los valores iniciales
    return 0;
}
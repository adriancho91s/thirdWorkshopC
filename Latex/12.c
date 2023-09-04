/*
- Fecha: 1 de septiembre 2023
- Hora: 1:00 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee por consola un valor de entrada de tipo número,
- y luego imprime este número al reves.
- Entrada: Un número entero n que representa el número que se desea imprimir al reves.
- Salida: El número n impreso al reves.
- Restricciones: El número debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

//Funciones custom
int long long  invertirNumero(int long long  numero, int long long invertido) {
    if (numero == 0) {
        return invertido;
    } else {
        return invertirNumero(numero / 10, invertido * 10 + numero % 10);
    }
}//Esta función invierte un número entero, de manera recursiva. 

//Función principal
int main () {
    //Declaración e inicialización de variables
    int long long numero = 0;//Se declara como long long para poder almacenar números de hasta 19 dígitos

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa lee por consola un valor de entrada de tipo número,\ny luego imprime este número al reves.\n");
    printf("Ingrese el número que desea imprimir al reves: ");
    scanf("%lld", &numero);

    //Impresión de terminos deseados
    printf("\nEl número %lld impreso al reves es: %lld", numero, invertirNumero(numero, 0));

    return 0;
}

/*
- Fecha: 1 de septiembre 2023
- Hora: 3:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa recibe un número entero positivo como entrada 
- y luego imprime su factorial.
- Entrada: Un número entero positivo.
- Salida: El factorial del número ingresado.
- Restricciones: El número debe ser entero positivo.
*/

//Librerías
#include <stdio.h>

//Factorial
long int factorial(int numero) {
    return numero == 0 ? 1 : numero * factorial(numero - 1);
}

//Leer número

int leerNumero(int numero) {
    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibe un número entero positivo como entrada\ny luego imprime su factorial.\nIngrese el número que desea calcular su factorial: ");
    scanf("%d", &numero);

    //Validación de número
    return numero < 0 ? (printf("\nEl número debe ser entero positivo.\n\n"), leerNumero(numero)) : 
           numero;
    
}

//Función principal
int main () {
    //Declaración e inicialización de variables
    int numero = 0;//Número que se va a calcular su factorial

    //Lectura y asignación de número
    numero = leerNumero(numero);

    //Impresion de factorial
    printf("\n%d! = %ld", numero, factorial(numero));

    return 0;
}
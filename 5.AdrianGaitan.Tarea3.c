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
- Este programa imprime en pantalla los primeros n terminos de la serie de Perrin.
- Entrada: Un número entero n que representa el enésimo término de la serie de Perrin.
- Salida: El enésimo término de la serie de Perrin.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include<stdio.h>

//Funciones custom
int perrin(int enesimo) {
    return (enesimo == 0) ? 3 ://Caso base
           (enesimo == 1) ? 0 ://Caso base
           (enesimo == 2) ? 2 ://Caso base
           perrin(enesimo - 2) + perrin(enesimo - 3);//Llamado recursivo
}

int imprimirPerrin(int terminoInicial, int cantidadTerminos) {
    if (terminoInicial >= (cantidadTerminos - 1)) {
        printf("%i.\n", perrin(terminoInicial));
        return 0;
    }
    printf("%i, ", perrin(terminoInicial));
    imprimirPerrin(terminoInicial + 1, cantidadTerminos);
    return 0;
}

//Función principal
int main () {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Padovan.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\nLa cantidad %i de términos de la serie de Padovan son: ", cantidadTerminos);
    imprimirPerrin(0, cantidadTerminos);
    return 0;
}
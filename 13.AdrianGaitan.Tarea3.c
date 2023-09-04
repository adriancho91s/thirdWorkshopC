/*
- Fecha: 1 de septiembre 2023
- Hora: 1:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa recibie por consola, 75 números diferentes de cero. 
- Luego imprime en pantalla la cantidad de números mayores a 150,
- número mayor y número menor encontrado en el grupo de números ingresados.
- Cantidad de números negativos encontrados en el grupo de números ingresados.
- Promedio de los números positivos encontrados.
- Entrada: 75 números diferentes de cero.
- Salida: Cantidad de números mayores a 150, número mayor y número menor encontrado en el grupo de números ingresados.
- Cantidad de números negativos encontrados en el grupo de números ingresados.
- Promedio de los números positivos encontrados.
- Restricciones: Los números deben ser diferentes de cero.
*/

//Librerías
#include <stdio.h>
#include <math.h>

void numeros(long int enesimo, int cantidadNumeros, int cantidadNumerosMayoresA150, int numeroMayor, int numeroMenor, int cantidadNumerosNegativos, int sumaNumerosPositivos, int cantidadNumerosPositivos) {
    int numero;
    if (enesimo == cantidadNumeros) {
        float promedioNumerosPositivos = (float)sumaNumerosPositivos / cantidadNumerosPositivos;
        printf("\nCantidad de números mayores a 150: %d", cantidadNumerosMayoresA150);
        printf("\nNúmero mayor: %d", numeroMayor);
        printf("\nNúmero menor: %d", numeroMenor);
        printf("\nCantidad de números negativos: %d", cantidadNumerosNegativos);
        printf("\nPromedio de los números positivos: %.2f", promedioNumerosPositivos);
    } else {
        printf("Ingrese el número %ld: ", enesimo + 1);
        scanf("%d", &numero);
        if (numero == 0) {
            printf("El número ingresado no puede ser cero.\n");
            numeros(enesimo, cantidadNumeros, cantidadNumerosMayoresA150, numeroMayor, numeroMenor, cantidadNumerosNegativos, sumaNumerosPositivos, cantidadNumerosPositivos);
        } else {
            cantidadNumerosMayoresA150 += (numero > 150);
            numeroMayor = (numero > numeroMayor) ? numero : numeroMayor;
            numeroMenor = (numero < numeroMenor) ? numero : numeroMenor;
            cantidadNumerosNegativos += (numero < 0);
            sumaNumerosPositivos += (numero > 0) * numero;
            cantidadNumerosPositivos += (numero > 0);
            numeros(enesimo + 1, cantidadNumeros, cantidadNumerosMayoresA150, numeroMayor, numeroMenor, cantidadNumerosNegativos, sumaNumerosPositivos, cantidadNumerosPositivos);
        }
    }
}

//Función principal
int main () {
    //Declaración e inicialización de variables
    int cantidadNumeros = 75;//Cantidad de números que va a recibir el programa

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibie por consola, 75 números diferentes de cero.\nLuego imprime en pantalla la cantidad de números mayores a 150,\nnúmero mayor y número menor encontrado en el grupo de números ingresados.\nCantidad de números negativos encontrados en el grupo de números ingresados.\nPromedio de los números positivos encontrados.\n");

    //Impresión de terminos deseados
    numeros(0, cantidadNumeros, 0, 0, 0, 0, 0, 0);

    return 0;
}
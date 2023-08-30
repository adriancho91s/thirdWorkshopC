#include<stdio.h>

int fibonacci (int n1, int n2, int sum) {
    if (n2 > 100) {
        printf("la suma es: %i", sum);
        return 0;
    }
    printf("%i ", n1);
    fibonacci(n2, (n2 + n1), (sum + n2));
}

int main () {
printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a sumar son:");
    fibonacci(0, 1, 0);
    return 0;
}
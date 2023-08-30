#include<stdio.h>

int fibonacci (int n1, int n2) {
    if (n1 > 10000) {
        return 0;
    }
    printf("%i ", n1);
    fibonacci(n2, (n2 + n1));
}

int main () {
    fibonacci(0, 1);
    return 0;
}
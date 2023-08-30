#include<stdio.h>
#include <stdio.h>

int lucas (int n1, int n2, int cont) {
    if (cont > 9) {
        return 0;
    }
    printf("%i ", n1);
    lucas(n2, (n2 + n1), cont++);
}

int main () {
    lucas(2, 1, 1);
    return 0;
}
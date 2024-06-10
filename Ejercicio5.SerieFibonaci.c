// Imprime los primeros n términos de la serie de Fibonacci.
// Utiliza un bucle for porque el número de términos de la serie está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: fibonacci
void fib(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n = 10; // Número que ingresa
    fib(n);
    return 0;
}

// Calcula el MCD de dos números enteros positivos.
// Utiliza un bucle while porque el número de iteraciones depende de los valores 
// de a y b, y no es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprimir el MCD
void imprimirMCD(int a, int b) {
    printf("El MCD es: %d\n", mcd(a, b));
}

// Función: mcd
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 48, b = 18; // Números que se ingresa
    imprimirMCD(a, b);
    return 0;
}

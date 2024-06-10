// Calcula la suma de una serie aritmética de números naturales hasta n.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprimir la suma aritmetica
void impSA(int n) {
    printf("La suma aritmetica es: %d\n", sumaA(n));
}

// Función: Suma aritmetica
int sumaA(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n = 10; // Número que ingresa
    impSA(n);
    return 0;
}

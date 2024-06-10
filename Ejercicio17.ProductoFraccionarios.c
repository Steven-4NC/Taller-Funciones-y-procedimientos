// Calcula el producto de una serie de números fraccionarios hasta n.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano

#include <stdio.h>

// Prototipo de la función productoFraccionarios
double productoF(int n);

// Procedimiento: Impirme el resultado 
void impF(int n) {
    printf("El producto de los numeros fraccionarios es: %.2f\n", productoF(n));
}

// Definición de la función productoFraccionarios
double productoF(int n) {
    double producto = 1.0;
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}

int main() {
    int n = 5; // Número que ingresa
    impF(n);
    return 0;
}

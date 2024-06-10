// Calcula la suma de una serie de números fraccionarios hasta n.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.
#include <stdio.h>

// Prototipo de la función sumaFraccionarios
double sumaFrac(int n);

// Procedimiento: imprimirSumaFraccionarios
void impSF(int n) {
    printf("La suma de los numeros fraccionarios es: %.2f\n", sumaFrac(n));
}

// Definición de la función sumaFraccionarios
double sumaFrac(int n) {
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}

int main() {
    int n = 5; // Número fijo
     impSF(n);
    return 0;
}

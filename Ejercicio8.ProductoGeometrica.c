// Calcula el producto de una serie geométrica de potencias de 2.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: imprimirProductoGeometrica
void impPG(int n) {
    printf("El producto geometrico es: %d\n", proG(n));
}

// Función: productoGeometrica
int proG(int n) {
    int producto = 1;
    for (int i = 0; i < n; i++) {
        producto *= 2;
    }
    return producto;
}

int main() {
    int n = 5; // Número que se ingresa
    impPG(n);
    return 0;
}

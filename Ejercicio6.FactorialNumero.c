// Calcula el factorial de un número.
// Utiliza un bucle for porque el número de iteraciones está definido por el número 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprimir el factor de un nuemero
void impF(int numero) {
    printf("El factorial es: %d\n", factorial(numero));
}

// Función: factorial
int factorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 5; // Número que ingresa
    impF(numero);
    return 0;
}

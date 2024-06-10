// Cuenta la cantidad de números primos hasta n.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprime los numeros que hay hasta n
void imprimirContarPrimos(int n) {
    printf("La cantidad de numeros primos hasta %d es: %d\n", n, contarPrimos(n));
}

// Función: Para calcular que numero es o no primo
int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Función: Cuenta los numeros que son primos
int contarPrimos(int n) {
    int contador = 0;
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n = 20; // Número que ingresa
    imprimirContarPrimos(n);
    return 0;
}

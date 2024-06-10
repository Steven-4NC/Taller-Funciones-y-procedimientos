#include <stdio.h>

// Procedimiento: Imprimir si el numero el primo o no
void impNpri(int numero) {
    if (esPrimo(numero)) {
        printf("El numero es primo.\n");
    } else {
        printf("El numero no es primo.\n");
    }
}

// Función: esPrimo
// Esta función verifica si un número entero es primo.
// Utiliza un bucle for porque el número de iteraciones está determinado por el número
// y es conocido de antemano.
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

int main() {
    int numero = 17; // Número que se ingresa
    impNpri(numero);
    return 0;
}

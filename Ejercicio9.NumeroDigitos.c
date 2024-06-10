// Cuenta el número de dígitos de un número entero.
// Utiliza un bucle do-while porque necesita al menos una iteración para manejar 
// el caso en que el número es 0, y el bucle debe continuar hasta que el número sea 0.

#include <stdio.h>

// Procedimiento: Imprimir numero de digitos
void impND(int numero) {
    printf("El numero de digitos es: %d\n", numeroD(numero));
}

// Función: contarDigitos
int numeroD(int numero) {
    int contador = 0;
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);
    return contador;
}

int main() {
    int numero = 12345; // Número que se ingresa
    impND(numero);
    return 0;
}

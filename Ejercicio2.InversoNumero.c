// Calcula el inverso de un número entero.
// Utiliza un bucle while porque el número de dígitos del número es desconocido 
// y el bucle debe continuar hasta que el número sea 0.

#include <stdio.h>

int invN(int numero);

// Procedimiento: imprimirInversoNumero
void impIN(int numero) {
    printf("El inverso del numero es: %d\n", invN(numero));
}

// Función: inversoNumero
int invN(int numero) {
    int inverso = 0;
    while (numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    return inverso;
}

int main() {
    int numero = 12345; // Numero que se ingresa
    impIN(numero);
    return 0;
}

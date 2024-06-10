// Calcula el n-ésimo número triangular utilizando una fórmula matemática directa.
// No requiere ningún bucle ya que el cálculo se realiza de manera directa.

#include <stdio.h>

// Función: Numero triangular
int numeroT(int n) {
    return n * (n + 1) / 2;
}

// Procedimiento: Imprime los numeros triangulares
void impNT(int n) {
    for (int i = 1; i <= n; i++) {
        printf("El numero triangular de %d es: %d\n", i, numeroT(i));
    }
}

int main() {
    int n = 5; // Número que ingresa
    impNT(n);
    return 0;
}

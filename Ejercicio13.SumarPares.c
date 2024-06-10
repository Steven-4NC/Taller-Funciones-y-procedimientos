// Calcula la suma de los números pares hasta n.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprimir la suma de los numeros pares hasta n
void impSP(int n) {
    printf("La suma de los numeros pares es: %d\n", sumaPares(n));
}

// Función: sumaPares
int sumaPares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n = 10; // Número que se ingresa
    impSP(n);
    return 0;
}

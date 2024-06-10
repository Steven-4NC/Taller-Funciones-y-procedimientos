// Calcula la suma de los números impares hasta n.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprimir la Suma de los numeros impares
void impSI(int n) {
    printf("La suma de los numeros impares es: %d\n", sumaImpares(n));
}

// Función: sumaImpares
int sumaImpares(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n = 10; // Número que se ingresa
    impSI(n);
    return 0;
}

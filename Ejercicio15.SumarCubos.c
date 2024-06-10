// Calcula la suma de los cubos de los primeros n números.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: imprimir la suma de los cubos de los primeros n numeros
void impSCu(int n) {
    printf("La suma de los cubos es: %d\n", sumaCubos(n));
}

// Función: sumaCubos
int sumaCubos(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }
    return suma;
}

int main() {
    int n = 5; // Número fijo
    impSCu(n);
    return 0;
}

// Calcula la suma de los cuadrados de los primeros n números.
// Utiliza un bucle for porque el número de iteraciones está definido por n 
// y es conocido de antemano.

#include <stdio.h>

// Procedimiento: Imprime la suma de los cuadrados de los primero n numeros
void impSC(int n) {
    printf("La suma de los cuadrados es: %d\n", sumaCuadrados(n));
}

// Función: sumaCuadrados
int sumaCuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int main() {
    int n = 5; // Número que se ingresa
    impSC(n);
    return 0;
}

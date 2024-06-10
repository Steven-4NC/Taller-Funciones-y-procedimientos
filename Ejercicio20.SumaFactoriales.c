// Calcula la suma de los factoriales de los primeros n números.
// Utiliza un bucle for para iterar sobre los números y calcular los factoriales.

#include <stdio.h>

// Procedimiento: Imprime la suma de los factoriales
void impSF(int n) {
    printf("La suma de los factoriales es: %d\n", sumaFactoriales(n));
}

// Función: Calcula el factorial
int factorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función: Suma los factoriales
int sumaFactoriales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    return suma;
}

int main() {
    int n = 5; // Número que ingresa
    impSF(n);
    return 0;
}

// Calcula la potencia de un número utilizando sumas sucesivas.
// Utiliza for anidados porque el número de iteraciones de ambos bucles es conocido 
// y está determinado por la base y el exponente.

#include <stdio.h>

// Procedimiento: Imprimir la potencia
void impP(int base, int exponente) {
    printf("La potencia es: %d\n", potencia(base, exponente));
}

// Función: potencia
int potencia(int base, int exponente) {
    int resultado = base;
    for (int i = 1; i < exponente; i++) {
        int temp = 0;
        for (int j = 0; j < base; j++) {
            temp += resultado;
        }
        resultado = temp;
    }
    return resultado;
}

int main() {
    int base = 3, exponente = 3; // Numero que se ingresa
    impP(base, exponente);
    return 0;
}

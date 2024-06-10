// Calcula la raíz de un número utilizando restas sucesivas.
// Utiliza un bucle while porque no se conoce de antemano cuántas restas serán necesarias 
// para alcanzar el número.

#include <stdio.h>

// Procedimiento: Imprimir raiz
void impR(int numero) {
    printf("La raiz es: %d\n", raiz(numero));
}

// Función: Sacar la raiz de un numero
int raiz(int numero) {
    int contador = 0;
    while (numero > 0) {
        numero -= (contador * contador * 3 + 3 * contador + 1);
        if (numero >= 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int numero = 27; //Numero que se ingresa
    impR(numero);
    return 0;
}

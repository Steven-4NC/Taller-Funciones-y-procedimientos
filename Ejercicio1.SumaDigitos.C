/* Calcula la suma de los dígitos de un número entero.
Utiliza un bucle while porque el número de dígitos del número es desconocido 
y el bucle debe continuar hasta que el número sea 0.*/

#include <stdio.h>
    //Declaracion de la Funcion
    int sumaD(int numero);
    // Procedimiento: Imprimir la suma de digitos
    void impSD(int numero) {
        printf("La suma de los digitos es: %d\n", sumaD (numero));
    }

    // Función: Sumar los digitos
    int sumaD(int numero) {
        int suma = 0;
        while (numero != 0) {
            suma += numero % 10;
            numero /= 10;
        }
        return suma;
    }

    int main() {
        int numero = 12345; // Numero que se ingresa
        impSD(numero);
        return 0;
    }

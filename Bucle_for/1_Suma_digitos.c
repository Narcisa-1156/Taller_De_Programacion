/*
1. Suma de los dígitos de un número
• Descripción: Dado un número, calcular la suma de sus dígitos.
• Ejemplo: 12567 -> 1 + 2 + 5 + 6 + 7 = 21
*/
#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int digito, divisor = 1;

    printf("Ingrese el numero que desea sumar\n");
    scanf("%d", &numero);

    // Calcular el número de dígitos y el divisor apropiado
    for (int i = numero; i >= 10; i /= 10) {
        divisor *= 10;
    }

    // Imprimir el número original
    printf("%d->", numero);

    // Descomponer el número y sumar los dígitos 
    for (int i = divisor; i > 0; i /= 10) {
        digito = numero / i;
        suma += digito;
        printf("%d", digito);
        numero %= i;
        if (i > 1) {
            printf("+");
        }
    }

    // Imprimir el resultado de la suma
    printf("=%d\n", suma);

    return 0;
}


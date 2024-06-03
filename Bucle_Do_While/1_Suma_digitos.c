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
    int i = numero;
    do
    {
        i /= 10;
        divisor *= 10;
    } while (i >= 10);
    // Imprimir el número original
    printf("%d->", numero);
    // Descomponer el número y sumar los dígitos 
    int j = divisor;
    do
    {
        digito = numero / j;
        suma += digito;
        printf("%d", digito);
        numero %= j;
        if (j > 1) {
            printf("+");
        }
        j /= 10;
    } while (j > 0);

    // Imprimir el resultado de la suma
    printf("=%d\n", suma);

    return 0;
}



/*
9. Número de dígitos de un número
• Descripción: Contar el número de dígitos de un número.
• Ejemplo: 12567 tiene 5 dígitos
*/
#include <stdio.h>

int main() {
    int numero, contador;

    // Solicitar al usuario que ingrese el número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Inicializar el contador en 0
    contador = 0;

    // Contar el número de dígitos
    for (contador = 0; numero != 0; contador++) {
        numero = numero / 10;
    }

    // Presentar el resultado
    printf("El numero ingresado tiene %d digitos.\n", contador);

    return 0;
}


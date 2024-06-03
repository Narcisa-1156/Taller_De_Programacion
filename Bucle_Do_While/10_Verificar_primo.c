/*
10. Verificar si un número es primo
• Descripción: Determinar si un número es primo.
• Ejemplo: 7 es primo, 10 no es primo
*/
#include<stdio.h>
#include<stdbool.h>

int main() {
    int n, comprobacion = 0;
    bool esprimo = true; // Inicializamos la variable esprimo como verdadero

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int i = 2; // Inicializamos la variable de control del ciclo while
    do
    {
        if (n % i == 0) {
            comprobacion += 1;
        }
        i++; // Incrementamos la variable de control del ciclo
    } while (i < n);
    if (comprobacion > 0) {
        esprimo = false;
        printf("El numero %d no es primo\n", n);
    } else {
        printf("El numero %d es primo\n", n);
    }

    return 0;
}

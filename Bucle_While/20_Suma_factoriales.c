/*
20. Calcular la suma de los factoriales de los primeros n números
• Descripción: Calcular la suma de los factoriales de los primeros n números.
• Ejemplo: Si n = 3, suma = 1! + 2! + 3! = 1 + 2 + 6 = 9
*/
#include <stdio.h>

int main() {
    int n, suma = 0, factorial = 1, i = 1;

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Mostrar la serie factorial
    printf("Suma = ");

    while (i <= n) {
        factorial *= i; // Calcula el factorial de i
        suma += factorial;

        // Mostrar el término factorial actual
        if (i == 1) {
            printf("%d!", i);
        } else {
            printf(" + %d!", i);
        }

        i++; // Incrementar el contador
    }

    // Mostrar la suma
    printf(" = %d\n", suma);

    return 0;
}

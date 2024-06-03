/*
13. Sumar los números pares hasta n
• Descripción: Calcular la suma de todos los números pares desde 1 hasta n.
• Ejemplo: Si n = 10, suma = 2 + 4 + 6 + 8 + 10 = 30
*/
#include<stdio.h>

int main() {
    int suma = 0, n;
    int i = 0; // Inicializamos la variable de control del ciclo while

    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("suma = ");

    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d", i);
            if (i + 1 <= n) {
                printf(" + ");
            }
            suma += i;
        }
        i++; // Incrementamos la variable de control del ciclo
    }

    printf(" = %d", suma);
    return 0;
}

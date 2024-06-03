/*
12. Sumar los números impares hasta n
• Descripción: Calcular la suma de todos los números impares desde 1 hasta n.
• Ejemplo: Si n = 10, suma = 1 + 3 + 5 + 7 + 9 = 25
*/
#include<stdio.h>

int main() {
    int suma = 0, n;
    int i = 1; // Inicializamos la variable de control del ciclo while

    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("suma = ");

    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d", i);
            if (i + 2 <= n) {
                printf(" + ");
            }
            suma += i;
        }
        i++; // Incrementamos la variable i
    }

    printf(" = %d", suma);
    return 0;
}

/*
7. Suma de una serie aritmética
• Descripción: Calcular la suma de los primeros n términos de una serie aritmética.
• Ejemplo: 1 + 2 + 3 + … + n
*/
#include<stdio.h>

int main() {
    int n, suma = 0;
    int i = 1; // Inicializamos la variable de control del ciclo while

    printf("Suma aritmetica\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("serie aritmetica = ");
    do
    {
        printf("%d", i);
        suma += i;
        if (i < n) {
            printf(" + ");
        }

        i++; 
    } while (i <= n);
    printf(" = %d", suma);

    return 0;
}

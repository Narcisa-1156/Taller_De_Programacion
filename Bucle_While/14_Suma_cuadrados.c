/*
14. Suma de los cuadrados de los primeros n números
• Descripción: Calcular la suma de los cuadrados de los primeros n números naturales.
• Ejemplo: Si n = 3, suma = 1^2 + 2^2 + 3^2 = 14
*/
#include <stdio.h>

int main() {
    int num, cuadrado = 0;
    int i = 1; 

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("suma = ");

    while (i <= num) {
        cuadrado = cuadrado + i * i;
        printf("%d^2", i);
        if (i < num) { 
            printf(" + ");
        }
        i++; 
    }

    printf(" = %d", cuadrado);
    return 0;
}

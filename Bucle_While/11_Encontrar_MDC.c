/*
11. Encontrar el MCD (Máximo Común Divisor)
• Descripción: Calcular el MCD de dos números.
• Ejemplo: MCD de 54 y 24 es 6
*/
#include <stdio.h>

int main() {
    int num1, num2, resultado = 1; // Inicializar el resultado en 1
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int i = 2; // Inicializamos la variable i
    while (i <= num1) {
        if (num1 % i == 0 && num2 % i == 0) {
            resultado *= i; // Multiplicamos i al resultado
            num1 /= i;
            num2 /= i;
        }
        else {
            i++; // Incrementamos la variable i
        }
    }

    printf("El MCD es %d\n", resultado);
    return 0;
}

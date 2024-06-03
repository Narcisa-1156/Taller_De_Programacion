/*
11. Encontrar el MCD (Máximo Común Divisor)
• Descripción: Calcular el MCD de dos números.
• Ejemplo: MCD de 54 y 24 es 6
*/
#include <stdio.h>

int main() {
    int num1, num2, resultado = 1; // Inicializamos resultado en 1
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = 2; i <= num1; i++) { // Empezamos desde 2 para evitar dividir por 0
        if (num1 % i == 0 && num2 % i == 0) {
            resultado *= i; // Multiplicamos i al resultado
            num1 /= i;
            num2 /= i;
        }
    }

    printf("El MCD es %d\n", resultado);
    return 0;
}

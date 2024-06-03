/*
18. Contar los números primos hasta n
• Descripción: Contar cuántos números primos hay desde 1 hasta n.
• Ejemplo: Si n = 10, hay 4 números primos (2, 3, 5, 7)
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    //Definir variables
    int n, contador = 0;
    bool esprimo;
    //Pedir al usuario que ingrese un numero
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    //Presentar los numeros ingresados
    printf("Numeros primos encontrados: ");

    for (int j = 2; j <= n; j++) {
        esprimo = true;
        
        // Verificar si el número j es primo
        for (int i = 2; i * i <= j; i++) {
            if (j % i == 0) {
                esprimo = false;
                break;
            }
        }
        
        if (esprimo) {
            printf("%d ", j);
            contador++;
        }
    }

    printf("\nCantidad de numeros primos encontrados: %d\n", contador);

    return 0;
}

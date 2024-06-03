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

    int j = 2; // Inicializamos el contador fuera del ciclo
    while (j <= n) { // Reemplazamos el ciclo for por un while
        esprimo = true;
        
        // Verificar si el número j es primo
        int i = 2;
        while (i * i <= j) {
            if (j % i == 0) {
                esprimo = false;
                break;
            }
            i++;
        }
        
        if (esprimo) {
            printf("%d ", j);
            contador++;
        }
        
        j++; // Incrementamos el contador dentro del ciclo
    }

    printf("\nCantidad de numeros primos encontrados: %d\n", contador);

    return 0;
}

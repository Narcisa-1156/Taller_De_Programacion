/*
19. Calcular el n-ésimo número triangular
• Descripción: Calcular el n-ésimo número triangular.
• Ejemplo: Si n = 4, el número triangular es 1 + 2 + 3 + 4 = 10
*/
#include<stdio.h>

int main(){
    int n, suma = 0;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("numero triangular: ");
    
    int i = 1; // Inicializamos el contador fuera del ciclo
    do
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" + ");
        }
        suma += i;
        i++; // Incrementamos el contador dentro del ciclo
    } while (i <= n);
    printf(" = %d", suma);

    return 0;
}

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
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" + ");
        }
        suma += i;        
    }
    printf(" = %d", suma);
    

    return 0;
}
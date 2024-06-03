/*
3. Potencia mediante sumas sucesivas
• Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
• Ejemplo: 2^3 = 2 * 2 * 2 = 8
*/
#include<stdio.h>

int main() {
    int base, exponente, resultado = 1;    
    printf("Ingrese la base: ");
    scanf("%d", &base);    
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);    
    printf("%d^%d = ", base, exponente);
    int i = 1;
    if (i <= exponente) {
        printf("%d", base);
        resultado *= base;
        i++;
    }
    do
    {
        printf(" * %d", base);
        resultado *= base;
        i++;
    } while (i <= exponente);
    printf(" = %d", resultado);    
    return 0;
}

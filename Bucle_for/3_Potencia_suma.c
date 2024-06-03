/*
3. Potencia mediante sumas sucesivas
• Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
• Ejemplo: 2^3 = 2 * 2 * 2 = 8
*/
#include<stdio.h>
int main(){
    int base, exponente, resultado = 1;
    printf("Ingrese la base\n");
    scanf("%d", &base);
    printf("Ingrese el exponente\n");
    scanf("%d", &exponente);
    printf("%d^%d = ", base, exponente);
    for (int i = 1; i <= exponente; i++)
    {
        printf("%d", base);
        if (i < exponente)
        {
            printf(" * ");
        }
        
        resultado *= base;
    }
    printf(" = %d", resultado);
    return 0;
}
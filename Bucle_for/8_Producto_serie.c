/*
8. Producto de una serie geométrica
• Descripción: Calcular el producto de los primeros n términos de una serie geométrica.
• Ejemplo: 2, 4, 8, 16, …
*/
#include<stdio.h>
int main(){
    int razon, n, resultado = 1;
    printf("Ingrese la razón comun 'Por ejemplo: 2'\n");
    scanf("%d", &razon);
    printf("Cuantos numeros desea ejecutar?\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        resultado *= razon;
        printf("%d", resultado);
        if (i < n)
        {
            printf(" , ");
        }       
    }   
    return 0;
}
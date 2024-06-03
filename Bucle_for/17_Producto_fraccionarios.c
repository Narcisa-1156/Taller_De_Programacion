/*
17. Producto de una serie de números fraccionarios
• Descripción: Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n.
• Ejemplo: Si n = 3, producto = 1 * 1/2 * 1/3
*/
#include<stdio.h>
int main(){
    float num, producto = 1;
    printf("Ingrese un numero\n");
    scanf("%f", &num);
    printf("suma = ");
    for (int i = 1.0; i <= num; i++)
    {
        producto = producto * 1/(float)i;
         if (i == 1) {
            printf("%d", i);
        } else {
            printf("1/%d", i);
        }
        if (i < num)
        {
            printf(" * ");
        }
    }
    printf(" = %f", producto);
    return 0;
}
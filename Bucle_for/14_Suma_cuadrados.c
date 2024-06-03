/*
14. Suma de los cuadrados de los primeros n números
• Descripción: Calcular la suma de los cuadrados de los primeros n números naturales.
• Ejemplo: Si n = 3, suma = 1^2 + 2^2 + 3^2 = 14
*/
#include<stdio.h>
int main(){
    int num, cuadrado = 0;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    printf("suma = ");
    for (int i = 1; i <= num; i++)
    {
        cuadrado = cuadrado + i*i;
        printf("%d^2 ", i);
        if (i + 1 < num)
        {
            printf(" + ");
        }      
    } 
    printf(" = %d", cuadrado);
    return 0;
}
/*
15. Suma de los cubos de los primeros n números
• Descripción: Calcular la suma de los cubos de los primeros n números naturales.
• Ejemplo: Si n = 3, suma = 1^3 + 2^3 + 3^3 = 36
*/
#include<stdio.h>
int main(){
    int num, cubo = 0;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    printf("suma = ");
    int i = 1; // Inicializamos el contador 
    while (i <= num) 
    {
        cubo = cubo + i*i*i;
        printf("%d^3 ", i);
        if (i + 1 < num)
        {
            printf(" + ");
        }
        i++; // Incrementamos el contador 
    } 
    printf(" = %d", cubo);
    return 0;
}

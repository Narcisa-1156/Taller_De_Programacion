/*
7. Suma de una serie aritmética
• Descripción: Calcular la suma de los primeros n términos de una serie aritmética.
• Ejemplo: 1 + 2 + 3 + … + n
*/
#include<stdio.h>
int main(){
    int n, suma=0;
    printf("Suma aritmetica\n");
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("serie aritmetica = ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        suma +=i;
        if (i < n)
        {
            printf(" + ");
        }
        
        
    }
    printf(" = %d", suma);
    return 0;
}
/*
13. Sumar los números pares hasta n
• Descripción: Calcular la suma de todos los números pares desde 1 hasta n.
• Ejemplo: Si n = 10, suma = 2 + 4 + 6 + 8 + 10 = 30
*/
#include<stdio.h>
int main(){
    int suma, n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("suma = ");
    for (int i = 0; i <= n; i++)
    {
        if (i % 2== 0)
        {
            printf("%d", i);
            if (i +1 <= n)
            {
                printf(" + ");
            }
            
            suma += i;
        }      
    }
    printf(" = %d", suma);
    return 0;
}
/*
12. Sumar los números impares hasta n
• Descripción: Calcular la suma de todos los números impares desde 1 hasta n.
• Ejemplo: Si n = 10, suma = 1 + 3 + 5 + 7 + 9 = 25
*/
#include<stdio.h>
int main(){
    int suma, n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    printf("suma = ");
    for (int i = 0; i <= n; i++)
    {
        if (i%2 != 0)
        {
            printf("%d", i);
            if (i +2 <= n)
            {
                printf(" + ");
            }
            
            suma += i;
        }      
    }
    printf(" = %d", suma);
    return 0;
}
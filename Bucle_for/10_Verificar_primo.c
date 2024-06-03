/*
10. Verificar si un número es primo
• Descripción: Determinar si un número es primo.
• Ejemplo: 7 es primo, 10 no es primo
*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, comprobacion = 0;
    bool esprimo;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n%i== 0)
        {
            comprobacion +=1;          
        }       
    }
    if (comprobacion > 0)
    {
        esprimo = false;
        printf("El numero %d no es primo\n", n);
    }else
    {
        esprimo = true;
        printf("El numero %d es primo\n", n);
    }
   
    return 0;
}
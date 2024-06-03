/*
2. Inverso de un número
• Descripción: Dado un número, obtener su inverso.
• Ejemplo: 12567 -> 76521
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    
    printf("Ingrese el numero que desea invertir: ");
    scanf("%i", &num);

    printf("El numero invertido es: ");

    int digitos = 0;
    int valor = num;
    while (valor != 0) {
        valor /= 10;
        digitos++;
    }

    for (int i = 0; i < digitos; i++) {
        int residuo = num % 10;  
        printf("%d", residuo);   
        num /= 10;              
    }

    printf("\n");  
    return 0;
}
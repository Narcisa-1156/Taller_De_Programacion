/*
2. Inverso de un número
• Descripción: Dado un número, obtener su inverso.
• Ejemplo: 12567 -> 76521
*/
#include <stdio.h>

int main() {
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

    int i = 0;
    while (i < digitos) {
        int residuo = num % 10;  
        printf("%d", residuo);   
        num /= 10;              
        i++;
    }

    printf("\n");  
    return 0;
}

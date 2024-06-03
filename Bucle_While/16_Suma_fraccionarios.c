/*
16. Suma de una serie de números fraccionarios
• Descripción: Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
• Ejemplo: Si n = 3, suma = 1 + 1/2 + 1/3
*/
#include<stdio.h>
int main(){
    float num, suma = 0;
    printf("Ingrese un numero\n");
    scanf("%f", &num);
    printf("suma = ");
    
    int i = 1; // Inicializamos el contador antes del ciclo
    while (i <= num) 
    {
        suma = suma + 1/(float)i;
        
        if (i == 1) {
            printf("%d", i);
        } else {
            printf(" 1/%d", i);
        }
        
        if (i < num)
        {
            printf(" + ");
        }
        
        i++; // Incrementamos el contador 
    }
    
    printf(" = %f", suma);
    return 0;
}

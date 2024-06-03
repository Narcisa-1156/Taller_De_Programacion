/*
4. Radicación mediante restas sucesivas
• Descripción: Calcular la raíz cúbica de un número utilizando restas sucesivas.
• Ejemplo: 27^(1/3) = 3
*/
#include<stdio.h>

int main(){
    int srespuesta;
    int raiz = 2;
    int base = 4; 
    if (base % raiz == 0)
    {
        for (int i = 0; i <= raiz; i++)
        {
            srespuesta = base - raiz;
        }
    }   
    printf("La raíz es %d\n", srespuesta);  
    return 0;
}





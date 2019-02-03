/**
 * Author: Luis y Rodrigo
 * Entrada: un numero n
 * Salida general: los factores del numero n
 * Proceso general:
 * - Genera los numeros factores a n
 */
#include <stdio.h>

int numero, suma = 1;

int main() {
    /* entrada */
    printf("Ingresa un numero: ");
    scanf_s("%d", &numero);

    /* procedimiento */
    if(numero != 0){
        for(int i = 2; i <= numero; i++){
            suma = suma + i;
        }
    }else{
        suma = 0;

    }

    /* salida */
    printf("Resultado: %d ",suma);
    return 0;
}
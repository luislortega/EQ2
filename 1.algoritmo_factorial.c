/**
 * Author: Luis y Rodrigo
 * Entrada: un numero n
 * Salida general: los factores del numero n
 * Proceso general:
 * - Genera los numeros factores a n
 */
#include <stdio.h>

int numero, factor[100], indice = 0, suma = 1;

int main() {
    /* entrada */
    printf("Ingresa un numero: ");
    scanf_s("%d", &numero);

    /* procedimiento */
    if(numero != 0){
        //Primero revisamos que sea factor de 2 y asi sucesivamente...
        for(int i = 2; i <= numero;){
            if((numero%i)==0) //Si el numero es visible por i
            {
                factor[indice]=i;
                numero=numero/i;
                indice++;
                continue;
            }
            i++;
        }
        for(int j = 0; j <= indice; j++){
            suma = suma + factor[j];
        }
    }else{
        suma = 0;

    }

    /* salida */
    printf(" %d ",suma);
    return 0;
}
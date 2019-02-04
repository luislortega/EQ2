//2. Escribe un programa que reciba 2 nœmeros y te imprima cual es el nœmero
//mayor, cual es el nœmero menor o si son iguales en caso de que sea
//necesario.

#include <stdio.h>
int main(){

int a,b;

printf("Introduce dos numeros");
scanf("%d", &a);
scanf("%d", &b);
if(a>b){
printf("El numero mayror es %d", a);
printf(" y el numero menor es %d", b);
}
else if(b>a){
printf("El numero mayror es %d", b);
printf(" y el numero menor es %d", a);
}
else printf("Ambos numeros son iguales");

return 0;
}

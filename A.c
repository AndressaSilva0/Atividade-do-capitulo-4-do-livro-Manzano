#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int a, b, maior, menor, resul;

printf("Digite o valor da A:");
scanf("%d", &a);
printf("Digite o valor de B: ");
scanf("%d", &b);
 

 if (a>b){
    maior = a;
    menor = b;
   }else{
    menor = a; 
    maior = b;  
 }
 
resul = maior - menor;
printf("O resultado da diferença entre A e B é %d: ", resul);

return 0;
}
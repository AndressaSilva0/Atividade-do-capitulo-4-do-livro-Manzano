#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

 int a, b, c, delta;

   printf("Digite o valor de A: ");
   scanf("%d", &a);
   printf("Digite o valor de B: ");
   scanf("%d", &b);
   printf("Digite o valor de C: ");
   scanf("%d", &c);

   delta = pow(b,2) - 4*a*c;

   if(delta<0){
    printf("Não há solução dos conjuntos reais: %d", delta);
   }
   if(delta>0){
    printf("Há duas solucġes no conjuntos dos reais: %d ", delta); 
   }
   if(delta==0){
    printf("Há uma solução real: %d ", delta);
   }

return 0;
}